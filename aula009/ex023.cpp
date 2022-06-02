// Write a program that reads a integer number from 0 to 9999
// and displays each of the separate digits on the screen.
 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    char str_number[4];
    cout << "Type a integer number from 0 to 9999:\n$ ";
    cin >> str_number;

    cout << "Thousands: " << str_number[0] << "000\n";
    cout << "Hundreds: " << str_number[1] << "00\n";
    cout << "Dozens: " << str_number[2] << "0\n";
    cout << "Units: " << str_number[3] << "\n";

    return 0;
}