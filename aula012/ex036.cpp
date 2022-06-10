// Write a program to approve the bank loan for the purchase of a house.
// Ask the value of the home, the buyer's salary and how many years he will pay.
// The monthly installment cannot exceed 30% of the salary or else the loan will be denied

#include <iostream>
using namespace std;

int main()
{   
    float home_price, salary, years_paying;
    cout << "Home price: ";
    cin >> home_price;
    cout << "Your monthly salary: ";
    cin >> salary;
    cout << "Years paying: ";
    cin >> years_paying;

    float monthly_installment = home_price / (years_paying * 12 );

    bool loan_aproved = monthly_installment < salary * 0.30;

    if (loan_aproved)
    {
        cout << "LOAN APROVED";
    }
    else
    {
        cout << "LOAN DENIED";
    }


    return 0;
}