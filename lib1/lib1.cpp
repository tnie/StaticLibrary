#include "lib1.h"
//#define  V0_1

std::string append(const std::string & a, const std::string & b)
{
#ifdef V0_1
    return ("Version 0.1[ used by lib2]: " + a + b);
#else
    return ("[used by main]" +a + b);
#endif // V0_1
}

