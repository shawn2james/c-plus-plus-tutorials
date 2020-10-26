#include <iostream>
#include <float.h>

using std::cout;
using std::endl;
using std::fixed;

int main()
{
    float a = 10.0/3;
    a = a*10000000;
    // double b = 7.7E4; // => 7.7*(10^4) => scientific notation
    double b;
    long double c;

    cout << a << endl; // Output in scientific notation
    cout << fixed << a << endl; // Output in raw form
    // No of trustworthy digits for a datatype
    cout << FLT_DIG << endl; 
    cout << DBL_DIG << endl;
    cout << LDBL_DIG << endl;
}