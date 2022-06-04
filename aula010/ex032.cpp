// Create a program that reads a year and shows if it is a leap year

#include <iostream>
using namespace std;

int main()
{
    int year;
    cout << "Type the year to see is it is a lap year:\n$ ";
    cin >> year;

    if (year % 4 == 0)
    {
        cout << "This year is a leap year";
    }
    else
    {
        cout << "This year is not a leap year";
    }
    return 0;
}