#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::cin;

int main()
{
    string name_answer = "Shawn";
    int age_answer = 16;
    string name_guess;
    int age_guess;

    cout << "Guess my name: ";
    cin >> name_guess;
    cout << "Guess my age: ";
    cin >> age_guess;

    if (name_guess==name_answer && age_guess==age_guess) 
    {
        cout << "You got both right!\n";
    }
    else if (name_guess==name_answer || age_guess==age_answer) 
    {
        cout << "You got one of them right!\n"; 
    }
    else 
    {
        cout << "You got both wrong!\n";
    }
}