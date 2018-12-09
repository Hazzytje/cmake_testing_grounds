# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)


# Add source to this project's executable.
add_executable (CMakeProject1 "CMakeProject1.cpp")

hunter_add_package(fmt)
find_package(fmt CONFIG REQUIRED)
target_link_libraries(CMakeProject1 PUBLIC fmt::fmt)

# TODO: Add tests and install targets if needed.
