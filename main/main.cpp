#include "../lib2/lib2.h"
#include "../lib1/lib1.h"
#include <iostream>

using namespace std;

#pragma comment(lib, "../Debug/lib2.lib")
#pragma comment(lib, "../Debug/lib1.lib")
int main()
{
    cout << add("niel ", "lov") << endl;
    cout << append("niel ", "lov") << endl;
}