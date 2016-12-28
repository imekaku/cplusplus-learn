import qbs

CppApplication {
    consoleApplication: true
    files: [
        "countobject.cpp",
        "countobject.h",
        "main.cpp",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}