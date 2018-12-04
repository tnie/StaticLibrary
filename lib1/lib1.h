#pragma once
#include <string>

std::string append(const std::string&, const std::string&);

// 打包静态库，可以没有类的定义，没有函数的定义
class test;
test append(const test&, const test&);
