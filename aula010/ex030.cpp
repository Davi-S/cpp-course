// Create a program that reads an integer and shows on the screen if it is even or odd

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Type a number:\n$ ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "Is odd";
    }
    else
    {
        cout << "Is even";
    }
    return 0;
}