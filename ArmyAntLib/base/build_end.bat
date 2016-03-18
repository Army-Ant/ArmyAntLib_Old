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
::     http://opensource.org/licenses/BSD-3-Clause
:: 
:: Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an AS IS BASIS, 
:: WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
:: 除非法律要求或者版权所有者书面同意,本软件在本协议基础上的发布没有任何形式的条件和担保,无论明示的或默许的.
:: See the License for the specific language governing permissions and limitations under the License. 
:: 请在特定限制或语言管理权限下阅读协议
:: This file is the internal source file of this project, is not contained by the closed source release part of this software
:: 本文件为内部源码文件, 不会包含在闭源发布的本软件中


:: Created by Jason 11/12/2015
:: This is a batch command script file used to do something after build in Visual Studio project
:: Please edit it in notepad++ or another text editor, instead of visual studio editor

:CmdStart
set ConfigType=%1
set ProjectPath=%2
set TargetName=%3
set TargetPlatform=%4
 
:CopyStaticLibFile
copy %ProjectPath%bin\%TargetName%.lib %ProjectPath%lib\

:: Need to got administor access here if you don't run VS or CL with it;

:CopyUsingFiles
set OutDir=%ProjectPath%..\LibOut\
del  %OutDir%* /Q
copy %ProjectPath%*.h %OutDir%\ /Y
del  %OutDir%include\* /Q
xcopy %ProjectPath%include %OutDir%include /D /C /Q /K /X /Y
del  %OutDir%lib\* /Q
xcopy %ProjectPath%lib %OutDir%lib  /D /C /Q /K /X /Y
del  %OutDir%bin\* /Q
xcopy %ProjectPath%bin %OutDir%bin  /D /C /Q /K /X /Y
del  %OutDir%bin\*.exp /Q
del  %OutDir%bin\*.lib /Q
del  %OutDir%bin\*.i* /Q
del  %OutDir%bin\*.pdb /Q
copy %ProjectPath%languages\Python\* %OutDir%bin /Y
copy %ProjectPath%externals\python3.5.1\%TargetPlatform%\*.dll %OutDir%bin /Y

:End
@echo on