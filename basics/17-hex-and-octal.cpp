#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main()
{
    // Decimal
    int num = 30;
    cout << "Decimal: " << num << endl;

    // Hexadecimal
    num = 0x30;
    cout << "Hexadecimal: " << num << " or " << std::hex << endl;

    // Octal
    num = 030;
    cout << "Octal: " << num << endl << endl;

    num = 30;
    cout << "Hexadecimal: " << std::hex << num << endl;
    cout << "Octal: " << std::oct << num << endl;
}