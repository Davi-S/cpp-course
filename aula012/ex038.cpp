// Write a program that reads two integers and compares them,
// displaying on the screen the largest value, the smallest value or the values ​​are equal

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Type two number: ";
    cin >> num1 >> num2;

    if (num1 > num2)
    {
        cout << "The first number is bigger than the second one";
    }
    else if (num1 < num2)
    {
        cout << "The second number is bigger than the first one";
    }
    else
    {
        cout << "The numbers are equal";
    }
    
    return 0;
}