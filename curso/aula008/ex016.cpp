// Aula 8
// Create a program that reads a decimal number and displays its entire portion on the screen

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float input, entire;
    cout << "Type a decimal number:\n$ ";
    cin >> input;
    modf(input, &entire); // using cmath library
    cout << "The entire part of this number is " << entire;
    return 0;
}