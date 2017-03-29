@echo off
  
:: Copyright (c) 2015 ArmyAnt
:: ��Ȩ���� (c) 2015 ArmyAnt
::
:: Licensed under the BSD License, Version 2.0 (the License); 
:: �����ʹ��BSDЭ�鱣��, Э��汾:2.0
:: you may not use this file except in compliance with the License. 
:: ʹ�ñ���Դ�����ļ�������, ��Ϊͬ��Э��
:: You can read the license content in the file "LICENSE" at the root of this project
:: �������ڱ���Ŀ�ĸ�Ŀ¼�ҵ���Ϊ"LICENSE"���ļ�, ���Ķ�Э������
:: You may also obtain a copy of the License at 
:: ��Ҳ�����ڴ˴����Э��ĸ���:
:: 
::     http://opensource.org/licenses/BSD-3-Clause
:: 
:: Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an AS IS BASIS, 
:: WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
:: ���Ƿ���Ҫ����߰�Ȩ����������ͬ��,������ڱ�Э������ϵķ���û���κ���ʽ�������͵���,������ʾ�Ļ�Ĭ���.
:: See the License for the specific language governing permissions and limitations under the License. 
:: �����ض����ƻ����Թ���Ȩ�����Ķ�Э��
:: This file is the internal source file of this project, is not contained by the closed source release part of this software
:: ���ļ�Ϊ�ڲ�Դ���ļ�, ��������ڱ�Դ�����ı������


:: Created by Jason 11/12/2015
:: This is a batch command script file used to do something after build in Visual Studio project
:: Please edit it in notepad++ or another text editor, instead of visual studio editor

:CmdStart
set ConfigType=%1
set ProjectPath=%2
set TargetName=%3
set TargetPlatform=%4

:CopyStaticLibFile or resolve the static library dependencies
if "%TargetPlatform%"=="x64" (set TargetLib=lib64) else (set TargetLib=lib)
if "%ConfigType:~-5%"=="tatic" (
echo "Copy the dependenced static libraries"
if not exist %ProjectPath%lib\%TargetLib% (mkdir %ProjectPath%lib\%TargetLib%)
copy %ProjectPath%external\boost\stage\%TargetLib%\libboost_system-vc140-mt-gd-1_59.lib %ProjectPath%lib\%TargetLib%\ /Y
copy %ProjectPath%external\boost\stage\%TargetLib%\libboost_system-vc140-mt-1_59.lib %ProjectPath%lib\%TargetLib%\ /Y
copy %ProjectPath%external\boost\stage\%TargetLib%\libboost_date_time-vc140-mt-gd-1_59.lib %ProjectPath%lib\%TargetLib%\ /Y
copy %ProjectPath%external\boost\stage\%TargetLib%\libboost_date_time-vc140-mt-1_59.lib %ProjectPath%lib\%TargetLib%\ /Y
copy %ProjectPath%external\boost\stage\%TargetLib%\libboost_regex-vc140-mt-gd-1_59.lib %ProjectPath%lib\%TargetLib%\ /Y
copy %ProjectPath%external\boost\stage\%TargetLib%\libboost_regex-vc140-mt-1_59.lib %ProjectPath%lib\%TargetLib%\ /Y
)

@echo on
echo "Move the reference static library"
copy %ProjectPath%bin\%TargetName%.lib %ProjectPath%lib\
copy %ProjectPath%bin\%TargetName%.dll %ProjectPath%test\
::del %ProjectPath%bin\%TargetName%.lib

:End
@echo on
