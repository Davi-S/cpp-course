// Write a program where the user must guess a random number chosen by the computer.
// Show on screen whether the user won or not

#include <iostream>
#include <random>
using namespace std;

int main()
{   
    // I don't know how this is doing it and how it works for now
    // Generate random numbers
    default_random_engine generator;
    uniform_int_distribution<int> distribution(1, 11);
    int computer_choice = distribution(generator);

    cout << "The computer chose a number in between 1 and 10! What number do you think it was?\n$ ";
    int number; 
    cin >> number;

    if (number == computer_choice)
    {
        cout << "Congrats! Thats the right number!\n";
    }
    else
    {
        cout << "You missed.";
    }
    return 0;
}