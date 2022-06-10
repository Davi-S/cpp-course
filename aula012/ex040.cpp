// Write a program that reads two grades from a student and calculates their average,
//showing a message at the end, according to the average achieved:
// average < 5: failed
// 5 < average < 6.9: recovery
// average => 7 passed

#include <iostream>
using namespace std;

int main()
{
    float grade1, grade2, avarage;
    cout << "Type 2 grades: ";
    cin >> grade1 >> grade2;

    avarage = (grade1 + grade2) / 2;

    if (avarage < 5)
    {
        cout << "Failed\n";
    }
    else if (5 < avarage || avarage < 7)
    {
        cout << "Recovery\n";
    }
    else
    {
        cout << "Passed\n";
    }
    
    return 0;
}