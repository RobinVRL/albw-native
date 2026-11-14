cmake_minimum_required(VERSION 3.20)
project(albw_port C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_EXTENSIONS ON)
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE RelWithDebInfo)
endif()

# Recompiled game code, produced by recomp/armrecomp.py (see build.sh). Never committed.
set(ALBW_GEN_DIR "${CMAKE_BINARY_DIR}/gen" CACHE PATH "armrecomp.py output directory")
file(GLOB GEN_SOURCES CONFIGURE_DEPENDS "${ALBW_GEN_DIR}/*.c")
if(NOT GEN_SOURCES)
  message(FATAL_ERROR "No recompiled sources in ${ALBW_GEN_DIR}: run ./build.sh")
endif()

find_package(SDL2 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)

# generated code: huge, branchy; -O1 keeps compile time sane, aliasing rules off for guest memory
add_library(albw_gen STATIC ${GEN_SOURCES})
target_include_directories(albw_gen PUBLIC runtime "${ALBW_GEN_DIR}")
target_compile_options(albw_gen PRIVATE -O1 -fno-strict-aliasing -fwrapv -w)

add_executable(albw
  runtime/main.c runtime/mem.c runtime/kernel.c runtime/ipc.c runtime/dispatch.c)
target_include_directories(albw PRIVATE runtime "${ALBW_GEN_DIR}")
target_compile_options(albw PRIVATE -Wall -fno-strict-aliasing)
target_link_libraries(albw PRIVATE albw_gen SDL2::SDL2 OpenGL::GL GLEW::GLEW m pthread)
