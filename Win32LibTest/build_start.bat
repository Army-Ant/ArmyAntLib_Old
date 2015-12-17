@echo off
:: Created by Jason 12/16/2015
:: This is a batch command script file used to do something before build in Visual Studio project
:: Please edit it in notepad++ or another text editor, instead of visual studio editor

:CmdStart
set SolutionD=%1
set ProjectD=%2

:: Need to got administor access here if you don't run VS or CL with it;

:CopyExtensionLibFiles
xcopy %SolutionD%LibOut\include %ProjectD%include /D /C /Q /K /X /Y
xcopy %SolutionD%LibOut\lib %ProjectD%lib  /D /C /Q /K /X /Y
copy %SolutionD%LibOut\*.h %ProjectD%\*.h  /Y
xcopy %SolutionD%LibOut\bin %ProjectD%bin  /D /C /Q /K /X /Y

:End
@echo on