#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

int main()
{
    // Square root
    cout << "square root of 25 = " << sqrt(25) << endl;
    cout << "square root of -25 = " << sqrt(-25) << endl;

    // Power
    cout << "4^2 = " << pow(4, 2) << endl;
    cout << "9^999 = " << pow(9, 999) << endl;
    cout << "(-9)^999 = " << pow(-9, 999) << endl;

    cout << NAN << endl << INFINITY << endl << -INFINITY << endl;

    // Remainder
    cout << "remainder of 17/4 = " << remainder(17, 4) << endl;
    cout << "remainder of 17/4 = " << 17%4 << endl;
    cout << "remainder of 17/3.25 = " << remainder(17, 3.25) << endl;
    cout << "remainder of 17/4 = " << fmod(17, 4) << endl;
    // cout << "remainder of 17/3.25 = " << 17%3.25 << endl; would give an error 

    // Maximum and minimum
    cout << "maximum value from (25, 3) = " << fmax(25, 3) << endl;
    cout << "minimum value from (25, 3) = " << fmin(25, 3) << endl;

    // Floor and ceiling values
    cout << "ceiling value of 3.25 = " << ceil(3.25) << endl;
    cout << "floor value of 3.25 = " << floor(3.25) << endl;
    cout << "ceiling value of -3.25 = " << ceil(-3.25) << endl;
    cout << "floor value of -3.25 = " << floor(-3.25) << endl;

    // Truncate digits after decimal point
    cout << "Truncated value of 3.25 = " << trunc(3.25) << endl;

    // Round
    cout << "Rounded value of 3.25 = " << round(3.25) << endl;
    cout << "Rounded value of 3.65 = " << round(3.65) << endl;
}