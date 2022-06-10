// Write a program that reads the year of a young person's birth and informs,
// according to his age, if he is still going to enlist in the military,
// if it is time to enlist, or if the time of enlistment has passed.
// If the program must also show the time that is missing or that has passed the deadline

#include <iostream>
#include <ctime>
#include <string>

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

    if (age == 18)
    {
        cout << "It's time to enlist\n";
    }
    else if (age < 18)
    {
        cout << "It's not time to enlist yet. Enlist in " << 18 - age << " year\n";
    }
    else if (age > 18)
    {
        cout << "Time to enlist has passed by " << age - 18 << " year\n";
    }

    return 0;


    // // print various components of tm structure. https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
    // cout << "Year:  " << 1900 + local_time -> tm_year << "\n";
    // cout << "Month: " << 1 + local_time -> tm_mon << "\n";
    // cout << "Day:   " << local_time -> tm_mday << "\n";
    // cout << "Time:  " << local_time -> tm_hour << ":" << local_time -> tm_min << ":" << local_time -> tm_sec << "\n";
}