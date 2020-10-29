#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

int main()
{
    // Example 1
    int age;
    cout << "Enter age: ";
    cin >> age;

    // For switch statements, the variable should be of an integral datatype
    switch(age)
    {
        case 13:
            cout << "You are 13 years old...\n";
            break;
        case 14:
            cout << "You are 14 years old...\n";
            break;
        case 15:
        case 16:
            cout << "You are 15 or 16 years old...\n";
            break;
        default:
            cout << "Catch all...\n";
            break;
    }

    // Example 2
    enum season{summer, spring, fall, winter};
    season now = winter;
    switch(now) 
    {
        case summer:
            cout << "It is hot...\n";
            break;
        case spring:
            cout << "The garden is growing...\n";
            break;
        case fall:
            cout << "Autumn...\n";
            break;
        case winter:
            cout << "It is freezing...\n";
            break;
    }

    // Example 3
    // class keyword specifies scope
    enum class Season{summer, spring, fall, winter};
    Season Now = Season::summer;
    switch(Now) 
    {
        case Season::summer:
            cout << "It is hot...\n";
            break;
        case Season::spring:
            cout << "The garden is growing...\n";
            break;
        case Season::fall:
            cout << "Autumn...\n";
            break;
        case Season::winter:
            cout << "It is freezing...\n";
            break;
    }
}