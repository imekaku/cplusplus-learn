import qbs

CppApplication {
    consoleApplication: true
    files: [
        "c-exception.c",
    ]

    Group {     // Properties for the produced executable
        fileTagsFilter: product.type
        qbs.install: true
    }
}
