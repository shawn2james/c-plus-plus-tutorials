#include <iostream>
#define X 10; // defines an constant variable X with value 10 

using std::cout;

int main()
{
    const int x = 5;
    // x = 10; would give an error
    enum { y = 100 }; 
    // y = 50; would give an error
}