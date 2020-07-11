#include <iostream>
#include <string>
#include "library1.hpp"
#include "library2.hpp"

//#define USE_STRING_FUNC

using namespace std;

int main()
{
const int N = 10;
const string s = "Hello!";
#ifdef USE_STRING_FUNC
    printString(s);
#else
  printString(to_string(makeDouble(N)));  
#endif // ifdefine USE_STRING_FUNC
    return 0;
}