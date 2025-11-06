cmake_minimum_required(VERSION 3.15)

set(CMAKE_TOOLCHAIN_FILE "C:/Users/l.masvidal/Documents/GitHub/vcpkg/scripts/buildsystems/vcpkg.cmake"
    CACHE STRING "Vcpkg toolchain file")

set(VCPKG_TARGET_TRIPLET "x64-windows" CACHE STRING "")

project(CMake_apprentissage LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CPM_DOWLOAD_VERSION 0.38.8)
include(cmake/CPM.cmake)

add_subdirectory(mathlib)
add_executable(Executable main.cpp)

find_package(nlohmann_json CONFIG REQUIRED)

target_link_libraries(Executable PRIVATE
    mathlib
    nlohmann_json::nlohmann_json
)


