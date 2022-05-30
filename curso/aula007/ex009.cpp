// Aula 7
// Write a program that reads any integer 
// and displays its multiplication table on the screen

#include <iostream>
using namespace std;

int main()
{
    float input;
    cout << "Type a number to see it's multiplication table:\n$ ";
    cin >> input;
    cout << input << " x 1 = " << input * 1 << "\n";
    cout << input << " x 2 = " << input * 2 << "\n";
    cout << input << " x 3 = " << input * 3 << "\n";
    cout << input << " x 4 = " << input * 4 << "\n";
    cout << input << " x 5 = " << input * 5 << "\n";
    cout << input << " x 6 = " << input * 6 << "\n";
    cout << input << " x 7 = " << input * 7 << "\n";
    cout << input << " x 8 = " << input * 8 << "\n";
    cout << input << " x 9 = " << input * 9 << "\n";
    return 0;
}