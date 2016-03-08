@echo off

:: Copyright (c) 2015 ArmyAnt
:: 版权所有 (c) 2015 ArmyAnt
::
:: Licensed under the BSD License, Version 2.0 (the License); 
:: 本软件使用BSD协议保护, 协议版本:2.0
:: you may not use this file except in compliance with the License. 
:: 使用本开源代码文件的内容, 视为同意协议
:: You can read the license content in the file "ARMYANT.COPYRIGHT.BSD_LICENSE.MD" at the root of this project
:: 您可以在本项目的根目录找到名为"ARMYANT.COPYRIGHT.BSD_LICENSE.MD"的文件, 来阅读协议内容
:: You may also obtain a copy of the License at 
:: 您也可以在此处获得协议的副本:
:: 
::     http://en.wikipedia.org/wiki/BSD_licenses
:: 
:: Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an AS IS BASIS, 
:: WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
:: 除非法律要求或者版权所有者书面同意,本软件在本协议基础上的发布没有任何形式的条件和担保,无论明示的或默许的.

:: Created by Jason 3/7/2016
:: This is a batch command script file used to compile the Java library file

set ThisDir=%~dp0
set OutDir=%ThisDir%..\..\..\LibOut\bin\
set TestDir=%ThisDir%..\..\..\JavaLibTest\lib\
set TestOut=%ThisDir%..\..\..\JavaLibTest\out\

:: Compile to java class files
javac -g -deprecation -encoding utf-8 -d %ThisDir%bin -s %ThisDir%bin %ThisDir%src\ArmyAnt\*.java
:: Goto the source code file directory
cd %ThisDir%bin
:: Pack to jar library file
jar cnf ArmyAntLib.jar ArmyAnt\*.class
:: Copy the jar file to test Project directory
copy /Y ArmyAntLib.jar %TestDir%
:: Copy the dynamic library to test Project directory
copy /Y %OutDir%*.dll %TestDir%
copy /Y %OutDir%*.so %TestDir%
:: Copy the dynamic library to test Project directory
copy /Y %OutDir%*.dll %TestOut%
copy /Y %OutDir%*.so %TestOut%

@echo "The Java library compiled successful !"
@echo on