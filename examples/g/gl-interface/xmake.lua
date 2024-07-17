add_requires("gl-interface", { configs = {backend = "opengl"} })

add_requires("glfw")

target("gli-example")
    set_kind("binary")
    add_packages("gl-interface", "glfw")
    add_files("main.c")