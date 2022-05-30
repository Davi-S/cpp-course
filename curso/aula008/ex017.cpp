// Aula 8
// Write a program that reads the length of two sides of a triangle and calculates the third side

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float side1, side2, side3;
    cout << "First side:\n$ ";
    cin >> side1;
    cout << "Second side:\n$ ";
    cin >> side2;
    side3 = sqrt(side1 * side1 + side2 * side2);
    cout << "The third side of this triangle is " << side3;
    return 0;
}