// Aula 8
// Write a program that reads any angle on the screen
// and displays the value of the sine, cosine and tangent of that angle

#include <iostream>
#include <math.h>
using namespace std;

int main()
{   
    int angle;
    float radians, angleSin, angleCos, angleTan;
    cout << "Type any angle:\n$ ";
    cin >> angle;
    radians = angle * 3.14/180;
    angleSin = sin(radians); angleCos = cos(radians); angleTan = tan(radians);
    cout << "sine: " << angleSin << " cosine " << angleCos << " tangent " << angleTan;
    return 0;
}