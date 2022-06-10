//Write a program that reads an athlete's year of birth and displays its category, according to age:
//up to 9 years: MIRIM
//up to 14 years: CHILD
//up to 19 years: JUNIOR
//up to 25 years: SENIOR
//above: MASTER

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // current date/time based on current system
    time_t now = time(0);
    tm *local_time = localtime(&now);

    // get birth
    int year_of_birth, age;
    cout << "Your birth year: ";
    cin >> year_of_birth;

    age = (1900 + local_time -> tm_year) - year_of_birth;

    cout << "Your age is: " << age << "\n";

    if (age < 9)
    {
        cout << "MIRIM";
    }
    else if (9 <= age && age < 14)
    {
        cout << "CHILD";
    }
    else if (14 <= age && age < 19)
    {
        cout << "JUNIOR";
    }
    else if (19 <= age && age < 25)
    {
        cout << "SENIOR";
    }
    else 
    {
        cout << "MASTER";
    }
    return 0;
}