// Write a program that reads a integer number from 0 to 9999
// and displays each of the separate digits on the screen.
 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int number;
    cout << "Type a integer number from -9999 to +9999:\n$ ";
    cin >> number;

    int th = (number % 1000);
    int hu = (number % 100);
    int te = (number % 10);
    int un = (number % 1);

    cout << "Thousands: " << number - th << "\n";
    cout << "Hundreds: "<< th - hu << "\n";
    cout << "Tens: " << hu - te << "\n";
    cout << "Units: " << te - un << "\n";

    return 0;
}