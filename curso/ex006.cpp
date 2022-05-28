// reate an algorithm that reads a number and displays its double, triple, and square root:

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int input, x2, x3, square;
    cout << "Type a number:\n$ ";
    cin >> input;
    x2 = input * 2; x3 = input * 3; square = pow(double(input), double(0.5));
    cout << "The double of this number is " << x2 << " The triple is " << x3 << " and it's square root is " << square;
    return 0;
}