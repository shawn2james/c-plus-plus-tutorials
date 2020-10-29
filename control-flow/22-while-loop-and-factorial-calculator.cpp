#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // A CLASSIC while LOOP
    // int i = 0; // initialization
    // while(i<10) // comparison
    // {
    //     cout << i << endl;
    //     i++; // update
    // }

    // FACTORIAL CALCULATOR
    int num;
    cout << "Enter number: "; cin >> num;
    int fact = 1;

    int i = num;
    while(i>0)
    {
        fact *= i;
        i--;
    }
    cout << "Factorial of " << num << " = " << fact << endl;
}