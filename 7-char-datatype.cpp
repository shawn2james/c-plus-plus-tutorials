#include <iostream>

using std::cout;

int main()
{
    /* 
    Maximum value of char = 127  
    Minimum value of char = -128
    */
    char a = 'A';
    char b = 'B';
    char c = 65;
    unsigned char d = 128;

    cout << a << "[ASCII code = " << (int)a << "]" << std::endl;
    cout << c << std::endl;
    cout << b << "[ASCII code = " << (int)b << "]" << std::endl;
    cout << (int)c << std::endl;
    cout << (int)d << std::endl;
}