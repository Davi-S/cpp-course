// Aula 7
// Write a program that converts a temperature
// typed in °C to °F

#include <iostream>
using namespace std;

int main()
{
    float temperatureCelcius, temperatureFahrenheit;
    cout << "Type the temperature in Celcius:\n$ ";
    cin >> temperatureCelcius;
    temperatureFahrenheit = (temperatureCelcius * 9/5) + 32;
    cout << temperatureCelcius << "Ceucius are equivalent to " << temperatureFahrenheit << " Fahrenheits";
    return 0;
}