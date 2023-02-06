cmake_minimum_required(VERSION 3.0.0)
project(Ass_1_2 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Ass_1_2 main.c)

set_property(TARGET Ass_1_2 PROPERTY C_STANDARD 99)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)