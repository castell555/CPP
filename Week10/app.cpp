#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    //char* p = "ACE"; // string literal, error!!
    const char* p = "ACE"; // string literal, const, read only
    cout << p << '\m';

    char a[] = "HI"; //compact initializer
    const char b[] = "HI"; //compact initializer
    const char* c = "HI"; // string literal

    return 0;
}