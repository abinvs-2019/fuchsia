# FIDL-based bind libraries tutorial for Bazel

This tutorial is for driver authors developing out-of-tree using the SDK who want to use FIDL-based
auto-generated bind libraries. The tutorial assumes familiarity with the following:

 * [FIDL Tutorial - Generated Bind Libraries](/docs/development/drivers/tutorials/fidl-tutorial.md#generated-bind-libraries)
 * [Bind library code generation tutorial for Bazel](/docs/development/sdk/bind-libraries-codegen-bazel.md)

## What is the same and what is different?

Most of the concepts and samples laid out in the linked tutorials above will apply
to users of the SDK as well.

The only differences are:

 * The Bazel target for the FIDL-based bind library `fuchsia_fidl_bind_library` needs to be
   manually added if the FIDL library is not from the SDK.
 * The Bazel target for the bind library code generation target `fuchsia_bind_cc_library` needs
   to be manually added if the FIDL library is not from the SDK.

## An example

The example in this section shows a manually-defined FIDL library and how to use the generated
bind library and its associated generated code to create bind rules for a child driver and
access constants for these bind library values from the parent driver.

### BUILD.bazel

#### The FIDL library

```bazel {:.devsite-disable-click-to-copy}
{% includecode gerrit_repo="fuchsia/sdk-samples/drivers" gerrit_path="src/bind_library/BUILD.bazel" region_tag="fuchsia_gizmo_protocol" %}
```

#### The parent driver

```bazel {:.devsite-disable-click-to-copy}
{% includecode gerrit_repo="fuchsia/sdk-samples/drivers" gerrit_path="src/bind_library/BUILD.bazel" region_tag="parent_driver" highlight="11,12,14,15" %}
```

#### The child bind rules

```bazel {:.devsite-disable-click-to-copy}
{% includecode gerrit_repo="fuchsia/sdk-samples/drivers" gerrit_path="src/bind_library/BUILD.bazel" region_tag="bind_rules" highlight="8,9,10,11" %}
```

### parent-driver.cc

```cpp {:.devsite-disable-click-to-copy}
{% includecode gerrit_repo="fuchsia/sdk-samples/drivers" gerrit_path="src/bind_library/parent-driver.cc" region_tag="bind_imports" highlight="1,3"%}

{% includecode gerrit_repo="fuchsia/sdk-samples/drivers" gerrit_path="src/bind_library/parent-driver.cc" region_tag="add_properties" adjust_indentation="auto" highlight="5,6,9,10" %}
```

### child-driver.bind

```none {:.devsite-disable-click-to-copy}
{% includecode gerrit_repo="fuchsia/sdk-samples/drivers" gerrit_path="src/bind_library/child-driver.bind" region_tag="bind_rules" highlight="2,4,8,10" %}
```