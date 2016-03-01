@echo off
:: Created by Jason 11/12/2015
:: This is a batch command script file used to do something after build in Visual Studio project
:: Please edit it in notepad++ or another text editor, instead of visual studio editor

:CmdStart
set ConfigType=%1
set ProjectPath=%2
set TargetName=%3
 
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
copy %ProjectPath%languages\Python\* %OutDir%bin /Y

:End
@echo on