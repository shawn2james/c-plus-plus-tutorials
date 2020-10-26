#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;
using std::cin;

int main() 
{
    // String class
    string greeting = "Hello";    
    cout << greeting << endl;
    cout << greeting[1] << endl;

    // Empty string by default
    string empty;
    cout << empty << endl;

    string name = "Shawn";
    // Concatenation
    cout << greeting+" "+name+"!" << endl;

    // Appending 
    name += " James";
    cout << greeting+" "+name+"!" << endl;

    cout << "Length of name = " << name.length() << endl; // length

    // Obtaining string as input
    string input;
    cin >> input; // only stores the first word in input
    cout << input << endl;
}