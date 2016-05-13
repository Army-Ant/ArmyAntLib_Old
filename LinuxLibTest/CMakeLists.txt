cmake_minimum_required(VERSION 3.0)
project(LinuxLibTest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_TAR_NAME LinuxLibTest)

MESSAGE("${ARMYANTLIB_TAR}")

set(JNI_INCLUDE_DIR $ENV{JAVA_HOME}/include)
MESSAGE("The JNI directory is ${JNI_INCLUDE_DIR}")
include_directories(${JNI_INCLUDE_DIR})
include_directories(${JNI_INCLUDE_DIR}/linux)

if(CMAKE_BUILD_TYPE STREQUAL Debug)
    add_definitions(
            -DDEBUG=1
    )
else()
    add_definitions(
            -DNDEBUG=1
    )
endif()

if(ARMYANTLIB_TAR STREQUAL i386)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -m32")
    add_definitions(
            -D_x86=1
            -D_32BIT=1
    )
elseif(ARMYANTLIB_TAR STREQUAL x64)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -m64")
    add_definitions(
            -D_x86=1
            -D_64BIT=1
    )
elseif(ARMYANTLIB_TAR STREQUAL arm)
    set(CMAKE_CXX_COMPILER "arm-linux-gnueabi-g++")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
    add_definitions(
            -D_arm=1
            -D_32BIT=1
    )
elseif(ARMYANTLIB_TAR STREQUAL arm64)
    set(CMAKE_CXX_COMPILER "arm-linux-gnueabi-g++")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
    add_definitions(
            -D_arm=1
            -D_64BIT=1
    )
endif()

add_definitions(
        -D_cplusplus=201412L
        -D_CMAKE=1
        -DOS_UNIX=1
)

set(SOURCE_FILES
        main.cpp
        )

add_executable(${CMAKE_TAR_NAME} ${SOURCE_FILES})

MESSAGE("${PROJECT_BINARY_DIR}")
SET_TARGET_PROPERTIES(${CMAKE_TAR_NAME} PROPERTIES OUTPUT_NAME LinuxLibTest)