// Make a program that reads something from the keyboard
// and display on the screen all possible information about it

#include <iostream>
using namespace std;

int main()
{   
    char input;
    cout << "Type any letter:\n$ ";
    cin >> input;
    cout << "The code for this letter is " << int(input) << "\n";
    cout << "It's sucessor is " << char(input + 1) << "\n";
    cout << "It's predecessor is " << char(input - 1) << "\n";
    // This is all the information i can do for now
    return 0;
}