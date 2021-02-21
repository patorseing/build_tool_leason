# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
  name = "hello_lib",
  srcs = ["hello.cc"],
  hdrs = ["hello.hh"],
)
# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
  name = "wowza",
  srcs = ["main.cc"],
  deps = [":hello_lib"],
)
