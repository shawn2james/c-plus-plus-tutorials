#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // A classic for loop
    // for(int i=0; i<10; i++) // initialization; comparison; update
    // {
    //     cout << i << endl;
    // }

    // Factorial of a number
    int num;
    int fact = 1;
    cout << "Enter number: "; cin >> num;

    for(int i=num; i>0; i--)
    {
        fact *= i;
    }
    cout << "Factorial of " << num << " =" << fact << endl;
}