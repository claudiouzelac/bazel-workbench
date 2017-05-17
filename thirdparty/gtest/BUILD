licenses(["notice"])

cc_library(
  name = "gtest",
  visibility = ["//visibility:public"],
  includes = [
    "upstream/googletest/include",
  ],
  hdrs = [
    "upstream/googletest/include/gtest/gtest-death-test.h",
    "upstream/googletest/include/gtest/gtest-message.h",
    "upstream/googletest/include/gtest/gtest_pred_impl.h",
    "upstream/googletest/include/gtest/gtest-test-part.h",
    "upstream/googletest/include/gtest/gtest.h",
    "upstream/googletest/include/gtest/gtest-param-test.h",
    "upstream/googletest/include/gtest/gtest-printers.h",
    "upstream/googletest/include/gtest/gtest-spi.h",
    "upstream/googletest/include/gtest/gtest-typed-test.h"
  ],
  srcs = glob([
    "upstream/googletest/include/gtest/internal/**/*.h"
  ]) +[
    "upstream/googletest/src/gtest-internal-inl.h",
    "upstream/googletest/src/gtest-death-test.cc",
    "upstream/googletest/src/gtest-filepath.cc",
    "upstream/googletest/src/gtest-port.cc",
    "upstream/googletest/src/gtest-printers.cc",
    "upstream/googletest/src/gtest-test-part.cc",
    "upstream/googletest/src/gtest-typed-test.cc",
    "upstream/googletest/src/gtest.cc",
  ],
  copts = [
    "-Ithirdparty/gtest/upstream/googletest"
  ],
  linkopts = [
    "-pthread"
  ],
  deps = [
    "//thirdparty/gflags",
    ":gtest_prod",
  ],
)

cc_library(
  name = "gtest_main",
  visibility = ["//visibility:public"],
  deps = [
    ":gtest",
  ],
  srcs = [
    "upstream/googletest/src/gtest_main.cc",
  ],
)

cc_library(
  name = "gtest_prod",
  visibility = ["//visibility:public"],
  hdrs = [
    "upstream/googletest/include/gtest/gtest_prod.h",
  ],
)

cc_library(
  name = "gmock",
  testonly = 1,
  visibility = ["//visibility:public"],
  hdrs = [
    "upstream/googlemock/include/gmock/gmock-actions.h",
    "upstream/googlemock/include/gmock/gmock-cardinalities.h",
    "upstream/googlemock/include/gmock/gmock-generated-actions.h",
    "upstream/googlemock/include/gmock/gmock-generated-function-mockers.h",
    "upstream/googlemock/include/gmock/gmock-generated-matchers.h",
    "upstream/googlemock/include/gmock/gmock-generated-nice-strict.h",
    "upstream/googlemock/include/gmock/gmock.h",
    "upstream/googlemock/include/gmock/gmock-matchers.h",
    "upstream/googlemock/include/gmock/gmock-more-actions.h",
    "upstream/googlemock/include/gmock/gmock-more-matchers.h",
    "upstream/googlemock/include/gmock/gmock-spec-builders.h",
  ],
  srcs = glob([
    "upstream/googlemock/include/gmock/internal/**/*.h"
  ]) + [
    "upstream/googlemock/src/gmock-cardinalities.cc",
    "upstream/googlemock/src/gmock.cc",
    "upstream/googlemock/src/gmock-internal-utils.cc",
    "upstream/googlemock/src/gmock-matchers.cc",
    "upstream/googlemock/src/gmock-spec-builders.cc",
  ],
  deps = [
    ":gtest",
  ],
  includes = [
    "upstream/googlemock/include",
  ],
)

cc_library(
  name = "gmock_main",
  testonly = 1,
  visibility = ["//visibility:public"],
  deps = [
    ":gmock",
  ],
  srcs = [
    "upstream/googlemock/src/gmock_main.cc",
  ],
)