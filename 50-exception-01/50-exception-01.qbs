import qbs

CppApplication {
    consoleApplication: true
    files: [
        "50-cplusplus.cpp",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
