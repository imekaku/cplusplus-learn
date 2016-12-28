import qbs

CppApplication {
    consoleApplication: true
    files: [
        "main.cpp",
        "test.cpp",
        "test.h",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
