# Qt 6 frontend for the ALBW native port (64-bit only). Build: native/frontend/qt/build.sh
#   albw_frontend_qt  static library: frontend.h C ABI + platform.h/gl.h implementation
#   albw-qt           test program: asset viewer (with a ROM) or platform test scene in the frontend
cmake_minimum_required(VERSION 3.21)
project(albw_frontend_qt LANGUAGES C CXX)

if(NOT CMAKE_SIZEOF_VOID_P EQUAL 8)
    message(FATAL_ERROR "The Qt frontend is 64-bit only (Qt 6 is installed as 64-bit).")
endif()
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE RelWithDebInfo)
endif()

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_EXTENSIONS ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt6 6.2 REQUIRED COMPONENTS Widgets OpenGL OpenGLWidgets)
find_package(PkgConfig REQUIRED)
pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)

set(NATIVE ${CMAKE_CURRENT_SOURCE_DIR}/../..)

add_library(albw_frontend_qt STATIC
    frontend.h frontend.cpp state.h
    mainwindow.h mainwindow.cpp
    screenview.h screenview.cpp
    dialogs.h dialogs.cpp
    controllersdialog.h controllersdialog.cpp
    keymap.h keymap.cpp
    fe_gl.h fe_gl.c
    fe_input.h fe_input.c
    fe_plat.c
    ${NATIVE}/platform/layout.c
    ${NATIVE}/platform/input.c)
target_include_directories(albw_frontend_qt PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${NATIVE}/platform)
target_compile_options(albw_frontend_qt PRIVATE -Wall -Wextra -Wno-unused-parameter)
target_link_libraries(albw_frontend_qt PUBLIC Qt6::Widgets Qt6::OpenGL Qt6::OpenGLWidgets PkgConfig::SDL3 m pthread)

set(ASSETS ${NATIVE}/assets)
add_executable(albw-qt
    test_main.c viewer_shim.c
    ${ASSETS}/viewer.c ${ASSETS}/romfs.c ${ASSETS}/yaz0.c ${ASSETS}/sarc.c ${ASSETS}/texture.c
    ${ASSETS}/texture_gl.c ${ASSETS}/bch.c ${ASSETS}/png.c
    ${NATIVE}/platform/demo.c)
set_source_files_properties(${ASSETS}/viewer.c PROPERTIES
    COMPILE_DEFINITIONS "main=albw_viewer_main;SDL_GL_GetProcAddress=albw_fe_viewer_gl_proc")
set_source_files_properties(${NATIVE}/platform/demo.c PROPERTIES COMPILE_DEFINITIONS "main=albw_demo_main")
target_link_libraries(albw-qt PRIVATE albw_frontend_qt)
