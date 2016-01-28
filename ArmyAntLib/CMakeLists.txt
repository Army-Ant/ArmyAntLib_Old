cmake_minimum_required(VERSION 3.3)
project(ArmyAntLib)


set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

if(CMAKE_BUILD_TYPE STREQUAL Debug)
    set(CMAKE_TAR_NAME ArmyAntLibd)
    add_definitions(
            -DDEBUG=1
    )
else()
    set(CMAKE_TAR_NAME ArmyAntLib)
    add_definitions(
            -DNDEBUG=1
    )
endif()

add_definitions(
        -D_cplusplus=1
        -D_CMAKE=1
        -DOS_UNIX=1
        -DARMYANTLIB_EXPORTS
)

set(CXX_SOURCE_FILES
        src/AAAes.cpp
        src/AAFile.cpp
        )

set(C_SOURCE_FILES
        src/C_AAFile.cpp
        )

add_library(${CMAKE_TAR_NAME} SHARED ${CXX_SOURCE_FILES})

MESSAGE(${PROJECT_BINARY_DIR})
SET_TARGET_PROPERTIES(${CMAKE_TAR_NAME} PROPERTIES OUTPUT_NAME ArmyAnt)