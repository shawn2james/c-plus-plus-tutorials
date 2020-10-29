#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    // integer array
    // data provided at initialization
    int guesses[] = {10, 1, 6 ,14, 2, 6,7, 134, 53};
    cout << "Integer array: " << guesses << endl;
    cout << "guesses[0] = " << guesses[0] << endl;
    cout << "guesses[2] = " << guesses[2] << endl;
    guesses[2] = 23;
    cout << "Array updated...\n";
    cout << "guesses[2] = " << guesses[2] << endl;

    // integer array
    // data not provided at initialization
    int numbers[20];
    cout << "Enter number to be inserted at index 0: "; cin >> numbers[0];
    cout << "numbers[0] = " << numbers[0] << endl;

    // looping through an array
    int items[] = {12, 24, 64, 53, 621, 67};
    int size = sizeof(items)/sizeof(items[0]); // size of whole array/size of one item 
    cout << "items: ";
    for(int i=0; i<size; i++)
    {
        cout << "\t" << items[i];
    }
    cout << endl;
}