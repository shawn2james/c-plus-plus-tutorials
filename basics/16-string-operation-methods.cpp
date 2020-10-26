#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main()
{
    // get index of a substring
    string greeting = "What the hell?";
    int idx = greeting.find("hell");
    greeting.replace(idx, 4, "****");
    cout << "Replaced 'hell' with '****': " << greeting << endl;

    // get substring of a string
    greeting = "What is up?";
    cout << "Substring of the string: " << greeting.substr(5, 2) << endl;

    // get first occurence
    cout << "First occurence of a vowel: " << greeting.find_first_of("aeiouAEIOU") << endl;
    cout << "First occurence of a character not in the string: " << greeting.find_first_of('z') << endl;

    // Compare string
    if(greeting.compare("What is up?")==0) cout << "Both strings are equal" << endl;
}
