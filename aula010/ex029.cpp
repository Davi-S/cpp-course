// Write a program that reads the speed of a car.
// If it exceeds 80km/h, show a message warning of the fine.
// The fine will be U$7 for each km over the limit

#include <iostream>
using namespace std;

int main()
{      
    const int MAX_SPEED = 80;
    float speed, fine;
    cout << "What was the speed of the car in km/h?\n$ ";
    cin >> speed;

    if (speed > 80) // must be fined
    {
        fine = (speed - 80) * 7;
        cout << "The fine will be U$" << fine << "\n";
    }
    else
    {
        cout << "Will not receive a fine";
    }
    return 0;
}