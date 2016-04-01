cmake_minimum_required(VERSION 3.3)
project(LinuxLibTest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_TAR_NAME LinuxLibTest)

if(CMAKE_BUILD_TYPE STREQUAL Debug)
    add_definitions(
            -DDEBUG=1
    )
else()
    add_definitions(
            -DNDEBUG=1
    )
endif()

add_definitions(
        -D_cplusplus=201412L
        -D_x86_64=1
        -D_CMAKE=1
        -DOS_UNIX=1
)

set(SOURCE_FILES
        main.cpp
        )

add_executable(${CMAKE_TAR_NAME} ${SOURCE_FILES})

MESSAGE(${PROJECT_BINARY_DIR})
SET_TARGET_PROPERTIES(${CMAKE_TAR_NAME} PROPERTIES OUTPUT_NAME LinuxLibTest)