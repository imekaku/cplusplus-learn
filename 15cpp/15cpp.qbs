import qbs

CppApplication {
    consoleApplication: true
    files: [
        "02.cpp",
        "string.cpp",
        "string.h",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
