#include <iostream>

using std::cout;
using std::boolalpha;

int main() 
{
    bool a = true;
    bool b = false;
    bool c = -1;
    bool d = 0;
    bool e = 90;
    bool f = 1;

    cout << a << b << c << d << e << f << std::endl;
    cout << boolalpha << a << std::endl;
    cout << boolalpha << b << std::endl;
    cout << boolalpha << c << std::endl;
    cout << boolalpha << d << std::endl;
    cout << boolalpha << e << std::endl;
    cout << boolalpha << f << std::endl;
}