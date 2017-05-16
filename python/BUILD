load("@io_bazel_rules_pex//pex:pex_rules.bzl", "pex_binary")
load("//python:requirements.bzl", "requirements")

pex_binary(
    name='main',
    main='main.py',
    deps=[':bare'],
    reqs=requirements,
    zip_safe=False,
)

py_library(
    name='bare',
    srcs=glob(['main.py']),
    data=glob(['resources/*']),
)


py_test(
    name='test',
    srcs=['tests/test.py'],
    deps=[':bare'],
)
