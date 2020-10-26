#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() 
{
    cout << "Enter age: ";
    int age;
    cin >> age;

    if(age < 13)
    {
        cout << "Not old enough...\n";
    } 
    else if(age < 19)
    {
        cout << "You're almost 19\n";
    }
    else 
    {
        cout << "You are old enough...\n";
    }
}
