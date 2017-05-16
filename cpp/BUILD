load("@bazel_tools//tools/build_defs/docker:docker.bzl", "docker_build")

cc_inc_library(
    name = "hello_inc",
    hdrs = ["inc/library.hpp"]
)

cc_binary(
  name = "hello",
  srcs = ["src/main.cc"],
  deps = [
    "@boost//:algorithm",
    ":hello_inc"
  ]
)

cc_test(
  name = "performance",
  srcs = ["test/performance.cc"],
  deps = [
  	"//thirdparty/benchmark",
    ":hello_inc"
  ]
)

docker_build(
    name = "hello_docker",
    base = "@docker_alpinelinux//:35",
    files = [":hello"]
)