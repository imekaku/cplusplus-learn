import qbs

CppApplication {
    consoleApplication: true
    files: [
        "04.cpp",
        "nocopyable.cpp",
        "nocopyable.h",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
