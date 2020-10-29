#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string password = "mypassword";
    string guess;
    do 
    {
        cout << "Guess my password: ";
        cin >> guess;
    } while(guess!=password);
    cout << "Correct guess!" << endl;
}