package("dstruct")
    set_homepage("https://github.com/sunrisepeak/dstruct")
    set_description("Data Structures Libs")
    set_license("Apache-2.0")

    set_urls("git@github.com:sunrisepeak/dstruct.git master")

    add_includedirs(".")

    on_install(function (package)
        os.mv("*", package:installdir("."))
    end)
package_end()