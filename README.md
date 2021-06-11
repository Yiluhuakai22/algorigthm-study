# algorigthm-study

## 环境
> + windows 7 或 10
> + cmake 3.20.3   下载地址 https://cmake.org/download/
> + mingw64   下载地址 https://sourceforge.net/projects/mingw-w64/
> + vscode(安装C/C++插件) 下载地址 https://code.visualstudio.com/download

## 测试框架
> + google test 下载地址 https://github.com/google/googletest

## 部署
> + 环境都搭建好之后，移动下载好的 googletest 到 LeetCode_C++ 
> + 进入 build 文件夹
> + 执行 cmake -G "MinGW Makefiles" .. 
> + 执行 make
> + 进入 bin 文件，即可运行所有的测试用例