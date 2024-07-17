add_repositories("sunrisepeak-projects git@github.com:Sunrisepeak/sunrisepeak-projects.git")

add_requires("dstruct")

target("dstruct-example")
    set_kind("binary")
    add_packages("dstruct")
    add_files("main.cpp")