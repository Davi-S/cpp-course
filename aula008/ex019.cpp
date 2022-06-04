// Aula 8
// Make a program that asks the user for 4 items and selects one of them to show on the screen

#include <iostream>
#include <random>
using namespace std;

int main()
{
    int nums[4];
    cout << "Type four numbers:\n$ ";
    cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];

    // I don't know how this is doing it and how it works for now
    // Generate random numbers
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(0, 3);
    int chosen = distribution(generator);

    cout << "The chosen number is " << nums[chosen];

    return 0;
}