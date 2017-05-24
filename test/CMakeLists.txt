cmake_minimum_required(VERSION 3.7)
project(ArmyAntLib_Test)

set(CMAKE_CXX_STANDARD 11)


if(TAR_MAC STREQUAL arm)
    set(CMAKE_CXX_COMPILER "arm-linux-gnueabi-g++")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")
elseif(TAR_BITS STREQUAL 32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -m32")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -m64")
endif()
set(CMAKE_TAR_NAME ArmyAntLib_Test)

#set(JNI_INCLUDE_DIR $ENV{JAVA_HOME}/include)
#MESSAGE("The JNI directory is ${JNI_INCLUDE_DIR}")
#include_directories(${JNI_INCLUDE_DIR})

MESSAGE("Current platform is ${CMAKE_SYSTEM_NAME}")
IF ((CMAKE_SYSTEM_NAME MATCHES "Windows") OR (CMAKE_SYSTEM_NAME MATCHES "CYGWIN"))
    #include_directories(${JNI_INCLUDE_DIR}/win32)
    add_definitions(
            -DOS_WINDOWS=1
            -D__USE_W32_SOCKETS
    )
ELSEIF (CMAKE_SYSTEM_NAME MATCHES "Linux")
    #include_directories(${JNI_INCLUDE_DIR}/linux)
    add_definitions(
            -DOS_UNIX=1
            -DOS_LINUX=1
    )
ELSEIF (CMAKE_SYSTEM_NAME MATCHES "Darwin")
    add_definitions(
            -DOS_UNIX=1
            -DOS_BSD=1
            -DOS_MACOS=1
    )
ELSE ()

ENDIF ((CMAKE_SYSTEM_NAME MATCHES "Windows") OR (CMAKE_SYSTEM_NAME MATCHES "CYGWIN"))

include_directories(../external/boost)

if(CMAKE_BUILD_TYPE STREQUAL Debug)
    add_definitions(
            -DDEBUG=1
    )
else()
    add_definitions(
            -DNDEBUG=1
    )
endif()

if(TAR_MAC STREQUAL x86)
    add_definitions(
            -D_x86=1
    )
elseif(TAR_MAC STREQUAL arm)
    add_definitions(
            -D_arm=1
    )
else()
endif()

if(TAR_BITS STREQUAL 32)
    add_definitions(
            -D_32BIT=1
    )
else()
    add_definitions(
            -D_64BIT=1
    )
endif()

add_definitions(
        -D_cplusplus=201412L
        -D_CMAKE=1
        -DARMYANTLIB_EXPORTS
)

set(SOURCE_FILES
        main.cpp)

LINK_DIRECTORIES("../bin/")
LINK_DIRECTORIES(../external/boost/stage/lib/)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY .)

add_executable(ArmyAntLib_Test ${SOURCE_FILES})

TARGET_LINK_LIBRARIES(ArmyAntLib_Test ArmyAnt_64)