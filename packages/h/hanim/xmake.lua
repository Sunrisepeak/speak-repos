package("hanim")
    set_homepage("https://github.com/Sunrisepeak/Hanim")
    set_description("Animation Engine")
    set_license("Apache-2.0")

    set_urls("git@github.com:Sunrisepeak/Hanim.git")

    add_configs("backend", {description = "hanim's backend", default = "gli-opengl", type = "string"})

    add_deps("glfw", "glm", "opencv", "gl-interface")

    add_includedirs(".")

    on_load("macosx", "linux", "windows", function (package)
        if package:config("backend") == "gli-opengl" then
            package:add("deps", "gl-interface", {configs = {backend = "opengl"}})
        end
    end)

    on_install(function (package)
        os.mv("*", package:installdir())
        --package:add("includedirs", ".")
    end)

package_end()