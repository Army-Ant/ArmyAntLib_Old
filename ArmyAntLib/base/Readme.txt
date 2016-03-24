ArmyAntlib库的开发备注和使用说明

本库采用Microsoft Visual Studio, Apple XCode 和 JetBrains CLion 三种IDE进行项目管理和代码一键编译, 编译器分别为 Microsoft VC++ build, LLVM, gcc/g++(cmake)
C/C++库在每个编译器都建立了调试工程,可在根目录找到.其中,CLion的调试结果以Linux为基准,其他平台若出现错误可不必在意
本库采用纯C语言作为跨语言接口, 并且目前对接到Java语言和Python语言
Java语言采用JetBrains IntelliJ IDEA进行项目管理和一键编译.Java库的调试有专门的调试工程在根目录可找到
Python语言采用JetBrains Pycharm 进行项目管理, 此脚本语言也可用任何工具进行编写管理.C++库编译时会自动将python代码复制到生成目录,调试时可直接在生成目录进行

本库已经引用了三个第三方库,分别是: boost, python, tbox, 其中python库的引用是为了随处使用python接口API进行编译