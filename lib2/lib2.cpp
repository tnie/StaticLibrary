#include "lib2.h"
#include "../lib1/lib1.h"

//#pragma comment(lib, "../Debug/lib1.lib")

std::string add(const std::string& a, const std::string& b)
{
    return append(a, b);
}


int add(int a, int b)
{
    return (a+b);
}