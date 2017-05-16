load("@bazel_tools//tools/build_defs/docker:docker.bzl", "docker_build")

# Extract .gz files
genrule(
    name = "alpinelinux_tar",
    srcs = ["alpine-minirootfs-3.5.1-x86_64.tar.gz"],
    outs = ["alpinelinux_tar.tar"],
    cmd = "cat $< | zcat >$@",
)

docker_build(
    name = "35",
    tars = [":alpinelinux_tar"],
    visibility = ["//visibility:public"],
)