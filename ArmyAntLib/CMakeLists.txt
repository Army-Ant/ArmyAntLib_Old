cmake_minimum_required(VERSION 3.3)
project(ArmyAntLib)


set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_definitions(
        -D_cplusplus=1
        -D_CMAKE=1
        -DOS_UNIX=1
        -DARMYANTLIB_EXPORTS
)
if(CMAKE_BUILD_TYPE STREQUAL Debug)
add_definitions(
        -DDEBUG=1
)
else()
add_definitions(
        -DNDEBUG=1
)
endif()

set(CXX_SOURCE_FILES
        src/AAAes.cpp
        src/AAFile.cpp
        src/AAStateMachine.cpp
        )

set(C_SOURCE_FILES
        src/C_AAFile.cpp
        )

add_library(ArmyAntLib SHARED ${CXX_SOURCE_FILES})

MESSAGE(${PROJECT_BINARY_DIR})
SET_TARGET_PROPERTIES(ArmyAntLib PROPERTIES OUTPUT_NAME ArmyAnt)