import qbs

CppApplication {
    consoleApplication: true
    files: [
        "04.cpp",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
