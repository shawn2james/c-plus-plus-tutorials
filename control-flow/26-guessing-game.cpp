#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;
using std::string;
using std::cin;

void play_game()
{
    int random = rand()%251;
    cout << "Random number: " << random << endl;
    int guess;
    while(true)
    {
        cout << "Take a guess: ";
        cin >> guess;
        if(guess==random)
        {
            cout << "You win!\n";
            break;
        }
        else if (guess<random) { cout << "Too low...\n"; }
        else { cout << "Too high...\n"; }
    }
}

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        cout << "0. Quit\n" << "1. Play Game\n";
        cout << "Enter choice: "; cin >> choice;
        switch(choice)
        {
            case 0:
                cout << "Thanks for nothing...\n";
                break;
            case 1:
                play_game();
                break;
            default:
                cout << "Invalid Choice!\n";
                break;
        }
    } while (choice!=0);
}