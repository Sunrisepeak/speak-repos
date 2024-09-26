--add_requires("hanim", { configs = {backend = "gli-opengl"} })
add_requires("hanim")

target("hanim-example")
    set_kind("binary")
    add_packages("hanim")
    add_files("main.cpp")