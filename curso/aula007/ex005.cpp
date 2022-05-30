// Aula 7
// Write a program that reads an integer and displays its successor and predecessor on the screen:

#include <iostream>
using namespace std;

int main()
{   
    int input;
    cout << "Type any number:\n$ ";
    cin >> input;
    cout << "The code for this letter is " << input << "\n";
    cout << "It's sucessor is " << input + 1 << "\n";
    cout << "It's predecessor is " << input - 1 << "\n";
    // This is all the information i can do for now
    return 0;
}