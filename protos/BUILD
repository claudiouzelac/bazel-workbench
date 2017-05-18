package(default_visibility = ["//visibility:public"])

load("@org_pubref_rules_protobuf//cpp:rules.bzl", "cc_proto_library")

filegroup(
    name = "protos",
    srcs = [
    	"common.proto",
    	"message.proto"
    ],
)

cc_proto_library(
    name = "cpp",
    proto_deps = [
    ],
    protos = [":protos"],
    verbose = 0,
    with_grpc = True,
)