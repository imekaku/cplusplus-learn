import qbs

CppApplication {
    consoleApplication: true
    files: [
        "integer.cpp",
        "integer.h",
        "main.cpp",
        "string.cpp",
        "string.h",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
