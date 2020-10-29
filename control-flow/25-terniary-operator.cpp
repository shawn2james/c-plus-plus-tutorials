#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int answer = 11;
    int points, guess;
    cout << "Enter guess: "; cin >> guess;

    /* using normal if statement
    if(guess==answer)
    {
        points = 10;
    }
    */

    // using terniary operator
    // two examples
    guess == answer ? (cout << "Good job...\n") : (cout << "Bad job...\n");
    points = guess==answer ? 10 : 0;
    // if guess == answer, then points = 10
    // else points = 0

    cout << "Points: " << points << endl;
}