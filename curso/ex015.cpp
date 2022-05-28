// Write a program that asks the number of kilometers traveled by a rented car 
// and the number of days it was rented. 
// Calculate the price to pay, knowing that the car costs R$60 per day, and R$0.15 per km driven.

#include <iostream>
using namespace std;

const int dayCost = 60; // in R$
const float kmCost = 0.15; // in R$

int main()
{
    float kmDriven, daysRented, totalCost;
    cout << "kilometers driven by car:\n$ ";
    cin >> kmDriven;
    cout << "Days rented:\n$ ";
    cin >> daysRented;
    totalCost = daysRented * dayCost + kmDriven * kmCost;
    cout << "The total to pay is R$" << totalCost; 
    return 0;
}