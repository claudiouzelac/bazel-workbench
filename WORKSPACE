http_archive(
    name = "com_github_nelhage_boost",
    strip_prefix = "rules_boost-ead0110ff90d5d90d2eb67e7e78f34f42d8486a1",
    type = "tar.gz",
    urls = [
        "https://github.com/nelhage/rules_boost/archive/ead0110ff90d5d90d2eb67e7e78f34f42d8486a1.tar.gz"
    ],
)

load("@com_github_nelhage_boost//:boost/boost.bzl", "boost_deps")
boost_deps()

new_http_archive(
    name = "docker_alpinelinux",
    url = "https://nl.alpinelinux.org/alpine/v3.5/releases/x86_64/alpine-minirootfs-3.5.1-x86_64.tar.gz",
    build_file = "alpinelinux.BUILD",
    sha256 = "fa17f25ded0b29d94d8cc2d9aabb6f737f4b987c42fe8a6d11e05cfe2c52a64c",
)

rules_scala_version="d916599d38de29085e5ca9eae167716c4f150a02"

http_archive(
             name = "io_bazel_rules_scala",
             url = "https://github.com/bazelbuild/rules_scala/archive/%s.zip"%rules_scala_version,
             type = "zip",
             strip_prefix= "rules_scala-%s" % rules_scala_version
             )

load("@io_bazel_rules_scala//scala:scala.bzl", "scala_repositories")
scala_repositories()

# Guava

maven_jar(
    name = "guava_maven",
    artifact = "com.google.guava:guava:19.0",
)

bind(
  name = "guava",
  actual = "@guava_maven//jar"
)

# JUnit

maven_jar(
    name = "junit_maven",
    artifact = "junit:junit:4.12",
)

bind(
  name = "junit",
  actual = "@junit_maven//jar"
)

# Apache Commons

maven_jar(
  name = "apache_commons_lang3_maven",
  artifact = "org.apache.commons:commons-lang3:3.4"
)

bind(
  name = "apache_commons_lang3",
  actual = "@apache_commons_lang3_maven//jar"
)