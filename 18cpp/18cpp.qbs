import qbs

CppApplication {
    consoleApplication: true
    files: [
        "02.cpp",
        "03.cpp",
        "main.cpp",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
