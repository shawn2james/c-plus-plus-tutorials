#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() 
{
    // no. of characters
    string greeting = "Hello";
    cout << "Length of string: " << greeting.length() << endl; 
    cout << "Size of string: " << greeting.size() << endl;

    // appending to the end
    greeting.append(" there!");
    cout << "After appending: " << greeting << endl;

    // inserting a string to specific index
    greeting = "Hello";
    greeting.insert(3, "olol");
    cout << "After inserting: " << greeting << endl;

    // erase certain no. of characters starting from a given index
    greeting = "Hello there!";
    greeting.erase(5, 6);
    cout << "After erasing: " << greeting << endl;

    // remove last character
    greeting = "Hello";
    greeting.pop_back();
    cout << "After popping: " << greeting << endl;

    // replace substring
    greeting = "Hello there!";
    greeting.replace(6, 5, "Shawn");
    cout << "After replacing: " << greeting << endl;
}