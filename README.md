# c++ 
## c++ 程序 python 调用
### 流程:
```shell
1. 开发C++代码
2. 安装 pybind11 (供c++使用)
    + 命令: 源码编译安装
3. 将C++代码编译成一个共享库(动态库)
    + 命令: sudo g++ api.cpp -fPIC -shared -o api.so -I  /usr/include/python3.7m/   -I  /usr/local/include/pybind11
4. Python 通过调用
``` 