// Aula 7
// Make an algorithm that reads an employee's salary 
// and displays his new salary with a 15% increase

#include <iostream>
using namespace std;

const float salaryIncrease = 0.15; // represents 15%
int main()
{
    float salary, newSalary;
    cout << "Type the employee's actual salary:\n$ ";
    cin >> salary;
    newSalary = salary + (salary * salaryIncrease);
    cout << "This employee new salary after 15% increase is " << newSalary;
    return 0;
}