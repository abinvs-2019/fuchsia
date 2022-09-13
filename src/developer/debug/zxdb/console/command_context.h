// Copyright 2022 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SRC_DEVELOPER_DEBUG_ZXDB_CONSOLE_COMMAND_CONTEXT_H_
#define SRC_DEVELOPER_DEBUG_ZXDB_CONSOLE_COMMAND_CONTEXT_H_

#include <lib/fit/function.h>

#include "src/developer/debug/zxdb/common/err.h"
#include "src/developer/debug/zxdb/console/async_output_buffer.h"
#include "src/developer/debug/zxdb/console/output_buffer.h"
#include "src/lib/fxl/memory/ref_counted.h"
#include "src/lib/fxl/memory/weak_ptr.h"

namespace zxdb {

class Console;

// This object collects the output and errors from a command and tracks its completion.
//
// The command implementation must keep this object alive for as long as the command executes (which
// could be asynchronously). When the CommandContext is destroyed, the deferred_callback will
// executed and the command will be considered complete.
class CommandContext : public fxl::RefCountedThreadSafe<CommandContext> {
 public:
  // Writes the given buffer to the output.
  virtual void Output(const OutputBuffer& output) = 0;

  // Convenience wrapper to output the given string.
  void Output(const std::string& s) { Output(OutputBuffer(s)); }

  // Synchronously prints the output if the async buffer is complete. Otherwise adds a listener and
  // prints the output to the console when it is complete.
  //
  // This call takes a reference to the CommandContext (keeping the command in a non-completed
  // state) for as long as the AsyncOutputBuffer remains incomplete.
  void Output(fxl::RefPtr<AsyncOutputBuffer> output);

  // Reports that the command failed with the given error. The error will be printed to the screen.
  virtual void ReportError(const Err& err) = 0;

  // May be null if this object has outlived the Console object. In production this probably won't
  // happen but can be triggered in tests more easily.
  Console* console() { return weak_console_.get(); }

 protected:
  FRIEND_REF_COUNTED_THREAD_SAFE(CommandContext);

  // Console may be null.
  explicit CommandContext(Console* console);
  virtual ~CommandContext();

 private:
  fxl::WeakPtr<Console> weak_console_;
};

// This is the normal implementation that just outputs everything to the console.
class ConsoleCommandContext : public CommandContext {
 public:
  // A completion callback is issued when this object goes out of scope. It is passed the first
  // error that was output (if any) which allows the caller to determine success or failure of the
  // operation.
  //
  // This error (along with any subsequent ones) will have already been printed so does not need
  // further processing in the common case.
  using CompletionCallback = fit::callback<void(const Err& first_error)>;

  using CommandContext::Output;
  void Output(const OutputBuffer& output) override;
  void ReportError(const Err& err) override;

 private:
  FRIEND_REF_COUNTED_THREAD_SAFE(ConsoleCommandContext);
  FRIEND_MAKE_REF_COUNTED(ConsoleCommandContext);

  // Console may be null.
  explicit ConsoleCommandContext(Console* console, CompletionCallback done = CompletionCallback());
  ~ConsoleCommandContext() override;

  CompletionCallback done_;  // Possibly null.

  Err first_error_;
};

// This command context implementation collects all the output
class OfflineCommandContext : public CommandContext {
 public:
  // A completion callback is issued when this object goes out of scope. It is passed all output
  // buffers and errors that have been generated.
  using CompletionCallback =
      fit::callback<void(std::vector<OutputBuffer> outputs, std::vector<Err> errors)>;

  using CommandContext::Output;
  void Output(const OutputBuffer& output) override;
  void ReportError(const Err& err) override;

 private:
  FRIEND_REF_COUNTED_THREAD_SAFE(OfflineCommandContext);
  FRIEND_MAKE_REF_COUNTED(OfflineCommandContext);

  // Console may be null.
  explicit OfflineCommandContext(Console* console, CompletionCallback done);
  ~OfflineCommandContext() override;

  CompletionCallback done_;  // Possibly null.

  std::vector<OutputBuffer> outputs_;
  std::vector<Err> errors_;
};

}  // namespace zxdb

#endif  // SRC_DEVELOPER_DEBUG_ZXDB_CONSOLE_COMMAND_CONTEXT_H_