#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string greeting;
    // cin >> greeting; stores characters upto a whitespace i.e first word
    cout << "Enter string: ";
    getline(cin, greeting);
    cout << greeting << endl;
}