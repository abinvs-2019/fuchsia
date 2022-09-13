// Copyright 2022 The Fuchsia Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef LIB_ZXIO_INCLUDE_LIB_ZXIO_CPP_DGRAM_CACHE_H_
#define LIB_ZXIO_INCLUDE_LIB_ZXIO_CPP_DGRAM_CACHE_H_

#include <fidl/fuchsia.posix.socket/cpp/wire.h>
#include <lib/fitx/result.h>
#include <lib/zx/eventpair.h>
#include <lib/zxio/cpp/socket_address.h>
#include <zircon/types.h>

#include <mutex>
#include <optional>
#include <unordered_map>

using ErrOrOutCode = zx::status<int16_t>;

namespace std {
template <>
struct hash<SocketAddress> {
  size_t operator()(const SocketAddress& k) const { return k.hash(); }
};
}  // namespace std

class RequestedCmsgSet {
 public:
  explicit RequestedCmsgSet(
      const fuchsia_posix_socket::wire::DatagramSocketRecvMsgPostflightResponse& response);

  constexpr static RequestedCmsgSet AllRequestedCmsgSet() {
    RequestedCmsgSet cmsg_set;
    cmsg_set.requests_ |= fuchsia_posix_socket::wire::CmsgRequests::kMask;
    return cmsg_set;
  }

  std::optional<fuchsia_posix_socket::wire::TimestampOption> so_timestamp() const;

  bool ip_tos() const;
  bool ip_ttl() const;
  bool ipv6_tclass() const;
  bool ipv6_hoplimit() const;
  bool ipv6_pktinfo() const;

 private:
  RequestedCmsgSet() = default;
  fuchsia_posix_socket::wire::CmsgRequests requests_;
  std::optional<fuchsia_posix_socket::wire::TimestampOption> so_timestamp_filter_;
};

class RequestedCmsgCache {
 public:
  using Result = fitx::result<ErrOrOutCode, std::optional<RequestedCmsgSet>>;
  Result Get(zx_wait_item_t err_wait_item, bool get_requested_cmsg_set,
             fidl::WireSyncClient<fuchsia_posix_socket::DatagramSocket>& client);

 private:
  struct Value {
    zx::eventpair validity;
    RequestedCmsgSet requested_cmsg_set;
  };
  std::optional<Value> cache_ __TA_GUARDED(lock_);
  std::mutex lock_;
};

class DestinationCache {
 public:
  using Result = fitx::result<ErrOrOutCode, uint32_t>;
  Result Get(std::optional<SocketAddress>& addr, const zx_wait_item_t& err_wait_item,
             fidl::WireSyncClient<fuchsia_posix_socket::DatagramSocket>& client);

 private:
  struct Value {
    std::vector<zx::eventpair> eventpairs;
    uint32_t maximum_size;
  };
  std::unordered_map<SocketAddress, Value> cache_ __TA_GUARDED(lock_);
  std::optional<SocketAddress> connected_ __TA_GUARDED(lock_);
  std::mutex lock_;
};

std::optional<ErrOrOutCode> GetErrorWithClient(
    fidl::WireSyncClient<fuchsia_posix_socket::DatagramSocket>& client);

#endif  // LIB_ZXIO_INCLUDE_LIB_ZXIO_CPP_DGRAM_CACHE_H_