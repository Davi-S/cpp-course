// Aula 7
// Develop a program that reads a student's two grades, calculates and displays their average

#include <iostream>
using namespace std;

int main()
{
    int grade1, grade2, avarage;
    cout << "Type the first grade:\n$ ";
    cin >> grade1;
    cout << "Type the second grade:\n$ ";
    cin >> grade2;
    cout << "The avarage of grade " << grade1 << " and grade " << grade2 << " is " << (grade1 + grade2) / 2;
    return 0;
}