// Aula 8
// Make a program that asks the user for 4 items and selects one of them to show on the screen

#include <iostream>
using namespace std;

int main()
{
    int nums[4];
    cout << "Type four numbers:\n$ ";
    cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];
    int chosen = nums[rand() % 3];
    cout << "The chosen number is " << chosen;

    return 0;
}