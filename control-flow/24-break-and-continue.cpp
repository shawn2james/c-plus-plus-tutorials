#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::endl;

int main()
{
    string text = "Hello my name is Shawn";
    for(int i=0; i<text.length(); i++)
    {
        if(text[i]=='s')
        {
            cout << "Found 's'!" << endl;
            break; // loop breaks when 'o' is encountered
        }
        else if(text[i]=='n') { continue; }
        else { cout << text[i] << endl; }
    }

    cout << "Done..." << endl;
}