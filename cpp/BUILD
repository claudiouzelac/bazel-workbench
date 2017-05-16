load("@bazel_tools//tools/build_defs/docker:docker.bzl", "docker_build")

cc_binary(
  name = "hello",
  srcs = ["main.cc"],
  deps = ["@boost//:algorithm"]
)

docker_build(
    name = "hello_docker",
    base = "@docker_alpinelinux//:35",
    files = [":hello"]
)