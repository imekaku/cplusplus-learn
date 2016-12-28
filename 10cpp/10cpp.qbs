import qbs

CppApplication {
    consoleApplication: true
    files: [
        "main.cpp",
        "tmp01.cpp",
        "tmp01.h",
        "tmp02.cpp",
        "tmp02.h",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
