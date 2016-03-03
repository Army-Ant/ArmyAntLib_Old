ArmyAntlib库的开发备注和使用说明

本库采用Microsoft Visual Studio, Apple XCode 和 JetBrains CLion 三种IDE进行项目管理和代码一键编译, 编译器分别为 Microsoft VC++ build, LLVM, gcc/g++(cmake)
本库采用纯C语言作为跨语言接口, 并且目前对接到Java语言和Python语言
Java语言采用JetBrains IntelliJ IDEA进行项目管理和一键编译.调试前,请将对应的C++库拷贝到ArmyAntLib/languages/Java/bin目录下
Python语言采用JetBrains Pycharm 进行项目管理, 此脚本语言也可用任何工具进行编写管理.C++库编译时会自动将python代码复制到生成目录,调试时可直接在生成目录进行