------------------------------------ English ----------------------------------------------------------------------------------------------

Library Name		:	ArmyAntLib(Win32) / libArmyAnt(Unix)
Development Language:	C++
Supported Languages	:	C++, C, Java, Python, C#(Unrealized), Swift(Unrealized)
Supported Platform	:	Win32, DotNet, Linux, FreeBSD, Android, macOS, iOS
Development IDEs	:	Microsoft Visual Studio 2015, JetBrains CLion, Apple XCode(Unrealized)
Usage				:	The C++ basic classes library for multi platforms, and its bridge interface for many other languages
SUGGESTED CONTENT	:	Stream (Include filesystem, network, pipe, etc.)
						Socket
						AES and MD5 algorithm
						Data structs and its algorithm (Tree, Multi-Value-Dictionary(map), Digraph, State-Machine, Message-Queue, Neuron and Neural-Network, etc.)
						Binary encoder and decoder
						
Welcome to view and use this library named ArmyAntLib
This library is a base class library developed for Group ArmyAnt, used for work and research. The copyright of this library is protected by BSD lisence, everyone whoever obey the lisence can use the library and its source code.
You can view the lisence in the file ARMYANT.COPYRIGHT.BSD_LICENSE.MD at the root of our project directory
This ReadMe file is written to introduce the structure, development way, and some notice for this library.

The file directory structure and some brief introduction is as follows:
	<Root>
		.idea <DIR>			This is the project config files directory for JetBrains CLion
		ArmyAntLib <DIR>	This is the main source code project directory for this library
		iOSLibTest <DIR>	This is the test project directory for iOS platform
		JavaLibTest <DIR>	This is the test project directory for Java
		LibOut <DIR>		Here are all the files what this library compiled, and what the users for library needed. You can copy the content out to use this library, do not need any other file operations
		LinuxLibTest <DIR>	This is the test project directory for Linux platform
		macOSLibTest <DIR>	This is the test project directory for mac OS platform
		Win32LibTest <DIR>	This is the test project directory for Win32 platform
		.gitattributes		This is the git attributes file
		.gitignore			This is the gitignore file
		ARMYANT.COPYRIGHT.BSD_LICENSE.MD	This is the text file about BSD lisence, include translation for Chinese
		ArmyAntLib.sln		This is the solution file for Microsoft Visual Studio 2015,include a project for the main source code project and the Win32LibTest project

The structure for the main source code project directory "ArmyAntLib" is as follows:
	ArmyAntLib <DIR>
		.idea <DIR>			This is the project config files directory for JetBrains CLion
		base <DIR>			Here are some basic c + + code files and other code files, these files has particularity in the structure, cannot be classified into "include" or "src" directory. They are all internal code files.
		bin <DIR>			Build target directory, contains all the generated files, as well as some debug symbol files
		docs <DIR>			Many useful documents about this library
		externals <DIR>		When reference the third party codes and projects, they will be joined to this directory. Currently, only Python3.5 and boost 1.59 are joined to this library
		include <DIR>		All C/C++ header files except the main out header(ArmyAntLib.h and C_ArmyAntLib.h) is palced into this directory. In particular, the C++ template class files will be named with ".hpp" extension
		languages <DIR>		All other language interface programs and their codes without C++
		lib <DIR>			All build static library files
		src <DIR>			All C++ source code files is placed here except which in "base"
		tools <DIR>			Third party development tools, include these tools developed by AnmyAnt, which is used in building this library
		ArmyAnt.h			The main C++ out header, user need only include this header to use the library in C++ in any platform
		C_ArmyAnt.h			The main C out header, user need only include this header to use the library in C in any platform
		vc140.idb			Visual Studio 2015 minimum rebuild dependency file
		ArmyAntLib.vcxproj	Visual Studio 2015 project file
		ArmyAntLib.vcxproj.filters	Visual Studio 2015 project filters file
		CMakeLists.txt		The project file for cmake, used for JetBrains CLion
		
The above is the file directory structure. Most IDEs use the file directory structure as the project structure, but Visual Studio does not. We use the VS 2015 to manage the project mainly, so we will introduce the project in VC++.
Open the file "ArmyAntLib.sln" in Visual Studio 2015, you will see the projects in this solution. There are 2 projects : main pro. named "ArmyAntLib", and the test pro. named "Win32LibTest", as they are in file directory.
We will primarily introduce the project "ArmyAntLib", the structure of this project is as follow:
	ArmyAntLib <vc14proj>
		00.other-Projects
		0.docs
		01.base
		02.Third-party-libraries
		03.mainOutput
			defination
			onlyIncludeFile
		04.CppLibCode
			cpptools
		05.CRefCode
		06.JavaRefCode
		07.PythonRefCode
		08.CSharpRefCode
		09.SwiftRefCode

------------------------------------ Traditional Chinese ----------------------------------------------------------------------------------


------------------------------------ Simplified Chinese -----------------------------------------------------------------------------------

库名	:	ArmyAntLib(Win32) / libArmyAnt(Unix)
开发语言:	C++
支持语言:	C++, C, Java, Python, C#(未实现), Swift(未实现)
支持平台:	Win32, DotNet, Linux, FreeBSD, Android, macOS, iOS
支持工具:	Microsoft Visual Studio 2015, JetBrains CLion, Apple XCode(未实现)
作用	:	跨平台基础操作类库
包含模块:	统一流操作(统一接口访问文件、网络、管道等等所有流), 
			Socket, 
			加密(包括AES和MD5),
			数据结构(树,多值字典,图,状态机,消息队列,神经网络等),
			二进制数据转换

欢迎了解和使用本库.
本库是为了ArmyAnt团队进行工作和开发研究所编写的基础类库.本库采用BSD协议进行版权保护.任何同意遵守BSD协议的团体和个人, 都可以自由免费使用本库及源代码. BSD协议的详细内容可以参考根目录文件: ARMYANT.COPYRIGHT.BSD_LICENSE.MD
本文件主要介绍本库的开发结构, 开发方式, 以及一些注意事项.

整个库的文件系统目录结构如下:
	<Root>
		.idea <DIR>			这是JetBrains CLion的工程数据文件, 不要手动更改
		ArmyAntLib <DIR>	这是本库源代码工程的主文件夹
		iOSLibTest <DIR>	这是用于iOS平台测试的工程目录, 涉及到C和Swift
		JavaLibTest <DIR>	这是用于本库的Java接口在Java上的测试工程目录
		LibOut <DIR>		这是本库的编译后生成总汇目录. 你可以直接将此目录内容复制出来进行使用, 根目录下的很多测试工程会引用此目录
		LinuxLibTest <DIR>	这是本库在Linux平台下进行测试的工程目录
		macOSLibTest <DIR>	这是本库在macOS平台下进行测试的工程目录
		Win32LibTest <DIR>	这是本库在Win32平台下进行测试的工程目录
		.gitattributes		本库Git版本控制系统的配置文件
		.gitignore			本库Git版本控制系统的提交忽略选项文件
		ARMYANT.COPYRIGHT.BSD_LICENSE.MD	这是BSD开源协议的原文副本, 包括中文译文
		ArmyAntLib.sln		这是Microsoft Visual Studio 2015的解决方案文件,包含类库源工程和Win32LibTest工程.对于此解决方案的工程详细结构,将在下面进行详细描述

对于库的源代码主文件夹, 其结构说明如下:
	ArmyAntLib <DIR>
		.idea <DIR>			这是JetBrains CLion的工程数据文件, 不要手动更改
		base <DIR>			存放了一些基础C++代码文件和其他代码文件, 这些文件在结构上具有特殊性, 不能归入include或者src中.它们均是内部代码, 不会在外部使用本库时用到
		bin <DIR>			生成目录, 包含全部生成的文件, 以及一些调试符号文件
		docs <DIR>			一些关于本库的有用的开发者文档
		externals <DIR>		引用了第三方库时,第三方库的相关文件或工程会加入到这个目录. 目前只有python3.5和boost1.59这两个第三方库
		include <DIR>		除库的独立输出头文件(ArmyAntLib.h和C_ArmyAntLib.h)以外, 所有随库一同生成的C/C++标头文件, 都会放置在这个目录. 包含模板类的头文件将会以.hpp为扩展名
		languages <DIR>		所有用于生成其他语言接口的工程和非C/C++代码, 都会放在这里, 并归入各自语言的工程之中
		lib <DIR>			Win32生成的动态库需要配合一个标静态库使用,它们被添加在这里. 本库直接生成的静态版本也会生成在此处, 目前本库暂时没有配置静态生成功能
		src <DIR>			除base中的一些特例外, 所有C++源文件都会被放置在这里
		tools <DIR>			引用了第三方的(或者ArmyAnt开发的)开发便利性工具时, 工具会被放置在这里
		ArmyAnt.h			库的C++独立输出头文件. 任何平台使用本库时只需要include本文件即可
		C_ArmyAnt.h			库的C语言独立输出头文件, 任何平台使用纯C语言开发时, 只需要include本文件即可
		vc140.idb			Visual Studio 2015 最小重生成数据库文件
		ArmyAntLib.vcxproj	Visual Studio 2015 工程管理文件
		ArmyAntLib.vcxproj.filters	Visual Studio 2015 工程生成配置文件
		CMakeLists.txt		CMake工程文件, 由JetBrain CLion管理工程时使用
		
以上是文件目录结构.对于大多数IDE, 直接用文件系统的结构作为工程结构. 本项目工程主要用Visual Studio 2015进行管理, 而VC++工程并不与文件目录结构关联. 因此对于工程和代码文件的说明, 将在VC工程说明中一同进行.
用VS2015打开根目录的ArmyAntLib.sln文件, 可以看到整个工程, 目前包含两个项目, 分别是ArmyAntlib主项目和Win32LibTest即Win32下的测试项目. 本文主要对ArmyAntLib项目进行说明
项目结构如下:
	ArmyAntLib <vc14proj>
		00.other-Projects
		0.docs
		01.base
		02.Third-party-libraries
		03.mainOutput
			defination
			onlyIncludeFile
		04.CppLibCode
			cpptools
		05.CRefCode
		06.JavaRefCode
		07.PythonRefCode
		08.CSharpRefCode
		09.SwiftRefCode