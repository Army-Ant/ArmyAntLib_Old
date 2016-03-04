cmake_minimum_required(VERSION 3.3)
project(ArmyAntLib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_TAR_NAME ArmyAntLib)

#include_directories($ENV{JAVA_HOME}/include)
#include_directories($ENV{PYTHON_INCLUDE})
find_path(JNI_INCLUDE_DIR jni.h $ENV{JAVA_HOME}/include)
find_path(PY_INCLUDE_DIR Python.h $ENV{PYTHON_INCLUDE})
include_directories($JNI_INCLUDE_DIR)
include_directories($PY_INCLUDE_DIR)

MESSAGE(This is $ENV{PYTHON_INCLUDE})

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
		-DARMYANTLIB_EXPORTS
)

set(C_SOURCE_FILES
        src/C_AAFile.cpp
        src/C_AANeuron.cpp
)

set(CXX_SOURCE_FILES
        src/AAAes.cpp
        src/AAFile.cpp
		src/AAPythonExport.cpp
		src/Java_AAFile.cpp
		src/Java_AANeuron.cpp
		${C_SOURCE_FILES}
)

add_library(${CMAKE_TAR_NAME} SHARED ${CXX_SOURCE_FILES})

MESSAGE(This is ${PROJECT_BINARY_DIR})
SET_TARGET_PROPERTIES(${CMAKE_TAR_NAME} PROPERTIES OUTPUT_NAME ArmyAnt)