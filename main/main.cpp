#include "../lib2/lib2.h"
#include <iostream>

#pragma comment(lib, "../Debug/lib2.lib")
#pragma comment(lib, "../Debug/lib1.lib")

using namespace std;

int main()
{
    cout << add(1, 2) << endl;
    cout << add("niel ", "lov") << endl;
}