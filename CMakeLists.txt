# 设置CMake的最低版本要求  
cmake_minimum_required(VERSION 3.10)  
  
# 设置项目名称  
project(MyProject)  
  
# 指定C++标准（可选，但推荐）  
set(CMAKE_CXX_STANDARD 11)  
set(CMAKE_CXX_STANDARD_REQUIRED True)    
  
# 添加可执行文件，并指定源文件  
add_executable(MyExecutable  
    src/Main.cpp  
    src/Point.cpp  
    src/Circle.cpp)  
  
# 包含头文件目录  
include_directories(src)  