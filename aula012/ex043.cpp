// Develop a logic that reads a person's weight and height,
// calculates their BMI and displays their status, according to the table below:
// below 18.5: underweight
// between 18.5 and 25: ideal weight
// 25 to 30: overweight
// 30 to 40: obesity
// over 40 morbid obesity

#include <iostream>
using namespace std;

int main()
{
    float weight, height;
    cout << "weight: ";
    cin >> weight;
    cout << "height: ";
    cin >> height;

    float imc = weight / (height * height);
    cout << "The IMC is: " << imc << "\n";

    if (imc < 18.5)
    {
        cout << "overweight\n";
    }
    else if (18.5 <= imc && imc < 25)
    {
        cout << "ideal weight\n";
    }
    else if (25 <= imc && imc < 30)
    {
        cout << "overweight\n";
    }
    else if (30 <= imc && imc < 40)
    {
        cout << "obesity\n";
    }
    else if (40 < imc)
    {
        cout << "morbid obesity\n";
    }
    return 0;
}