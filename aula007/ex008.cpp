// Aula 7
// Write a program that reads a value in meters and displays it converted to centimeters and millimeters

#include <iostream>
using namespace std;

int main()
{
    float meter;
    cout << "Type a value in metters:\n$ ";
    cin >> meter;
    cout << "This value in centimeters is " << meter * 100 << " and in millimeter is " << meter * 1000;
    return 0;
}