# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_library
cc_library(
  name = "hello_lib",
  srcs = ["hello.cc"],
  hdrs = ["hello.hh", "HelloConfig.hh"],
)
# https://docs.bazel.build/versions/master/be/c-cpp.html#cc_binary
cc_binary(
  name = "wowza",
  srcs = ["main.cc"],
  deps = [":hello_lib"],
)

cc_test(
  name = "hello-test",
  srcs = ["hello_test.cc"],
  deps = [
    ":hello_lib",
    "@gtest//:gtest",
    "@gtest//:gtest_main" # Only if hello_test.cc has no main()
  ],
)
