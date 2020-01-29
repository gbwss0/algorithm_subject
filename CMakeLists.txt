cmake_minimum_required(VERSION 3.14)
project(cpp_clion)

set(CMAKE_CXX_STANDARD 11)

add_executable(cpp_clion os_5.c)
#add_executable(cpp_clion main.cpp STL.cpp cpp201903-1小中大.c CSP201903-2二十四点.c CSP201812-1小明上学.c CSP201812-2小明放学.c CSP201803-2碰撞的小球.c )
#CSP201803-2碰撞的小球.cpp CSP201708-2公共钥匙盒.cpp CSP201712-2游戏.cpp CSP201809-2卖菜.cpp
#CSP201503-2数字排序.cpp CSP201709-1打酱油.c CSP201509-3模板生成系统.cpp
#set(BUILD_DIR ${PROJECT_SOURCE_DIR})  #设置编译目录,也就是Makefile文件所在目录
#message(${BUILD_DIR}) #打印目录路径
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
#add_custom_target(test COMMAND make -C ${BUILD_DIR}) #最关键的就是这句, 设置外部编译文件而不是使用CMakeLists.txt