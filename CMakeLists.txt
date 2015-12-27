cmake_minimum_required(VERSION 3.3)
project(ArmyAntLib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    ArmyAntLib/base/base.hpp
    ArmyAntLib/base/ProgrammerRule.txt
    ArmyAntLib/include/AA_end.h
    ArmyAntLib/include/AA_start.h
    ArmyAntLib/include/AAAes.h
    ArmyAntLib/include/AABinary.h
    ArmyAntLib/include/AAClassPrivateHandle.hpp
    ArmyAntLib/include/AADefine.h
    ArmyAntLib/include/AAFile.h
    ArmyAntLib/include/AAStateMachine.h
    ArmyAntLib/include/AATripleMap.hpp
    ArmyAntLib/include/C_AADefine.h
    ArmyAntLib/include/C_AAFile.h
    ArmyAntLib/src/AAAes.cpp
    ArmyAntLib/src/AAFile.cpp
    ArmyAntLib/src/AAStateMachine.cpp
    ArmyAntLib/src/C_AAFile.cpp
    ArmyAntLib/ArmyAnt.h
    ArmyAntLib/C_ArmyAnt.h)

add_executable(ArmyAntLib ${SOURCE_FILES})