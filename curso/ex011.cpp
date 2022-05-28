// Write a program that reads the width and height of a wall in meters, 
// calculates its area and the amount of paint needed to paint it.
// Knowing that each liter of paint paints an area of ​​2m²

#include <iostream>
using namespace std;

const float paintMetersEficiency = 2; // to the power of two (2m²)
int main()
{
    float width, heigth, wallArea, paintAmount;
    cout << "Type wall width:\n$ ";
    cin >> width;
    cout << "Type wall heigth:\n$ ";
    cin >> heigth;
    wallArea = width * heigth;
    paintAmount = wallArea / paintMetersEficiency;
    cout << "To paint this wall, you will need " << paintAmount << " litter of paint";
    return 0;
}