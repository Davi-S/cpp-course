// Create a program that reads an employee's salary and calculates the value of his raise.
// For salaries greater than $1,250.00, calculate a 10% increase.
// For those below or equal, the increase is 15%

#include <iostream>
using namespace std;

int main()
{   
    float salary, modified_salary;
    cout << "Type the employee actual salary:\nU$"; 
    cin >> salary;

    if (salary > 1250)
    {
        modified_salary = salary * 1.1; // 10% raise
    }
    else
    {
        modified_salary = salary * 1.5; // 15% raise
    }

    cout << "The salary after the raise is: " << modified_salary;

    return 0;
}