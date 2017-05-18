# Example Project

This is an example mixed build project that uses Bazel to compile.  I recommend using
Jetbrain's projects with the [Bazel Plugin](https://github.com/bazelbuild/intellij).

## Requirements

  Bazel which requires Java.

	OSX Installation: brew install bazel

  C++ code requires a modern compiler like Clang.

  Scala code requires the Scala compiler.

## Command Line Fun

Run GRPC server:

  `bazel run //cpp:server`

RUN GRPC client:

  `bazel run //cpp:client`

Run the hello executable:

  `bazel run //cpp:hello`

Build the hello, docker archive:

  `bazel build //cpp:hello_docker.tar`

Create the docker image from docker archive:

  `docker load -i bazel-bin/cpp/hello_docker.tar`

Build the base image archive:

  `bazel build //docker:alpinelinux`

Load the base image archive:

  `bazel run //docker:alpinelinux`

Run the docker image:

  `docker run -i -t bazel/docker:alpinelinux /bin/sh`

Generate a depedency graph:

  `bazel query 'deps(//:cpp)' --output graph > graph.in`

  `dot -Tpng < graph.in > graph.png`
   
Query all depdencies:

  `bazel query 'deps(//...)'`

Run the Scala application:

  `bazel run "//src/main/scala/com/example:ScalaMain"` 