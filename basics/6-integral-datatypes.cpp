#include <iostream>
#include <climits>

using std::cout;

int main() 
{
    // Signed Integral Datatypes
    short a;
    int b; // atleast 16 bits, maximum 32 bits
    long c; // atleast 32 bits
    long long d; // atleast 64 bits
    // short <= int <= long <= long long

    // Unsigned Integral Datatypes
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    cout << "short: " << sizeof(a) << std::endl
    << "int: " << sizeof(b) << std::endl
    << "long: " << sizeof(c) << std::endl
    << "long long: " << sizeof(d) << std::endl;

    cout << SHRT_MAX << std::endl << SHRT_MIN << std::endl 
    << USHRT_MAX << std::endl; 
    cout << INT_MAX << std::endl << INT_MIN << std::endl << UINT_MAX << std::endl << std::endl;
}