-- Project definition
set_project("helloraylib")
set_version("1.0.0")

-- C++ standard
set_languages("c++17")

-- Add raylib as dependency (recommended way)
add_requires("raylib 4.5.0", {configs = {opengl = "21"}})

target("helloraylib")
    set_kind("binary")
    add_files("src/main.cpp")

    -- Link raylib package
    add_packages("raylib")

    -- Windows specific system libs (usually auto-handled, but safe)
    if is_plat("windows") then
        add_syslinks("winmm", "gdi32", "user32", "shell32")
    end