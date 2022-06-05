// Create a program that reads the length of three lines and tells whether or not they can form a triangle

#include <iostream>
using namespace std;

int main()
{
    int side_1, side_2, side_3;
    cout << "Type the 3 sides to see if the triangle exists:\n$ ";
    cin >> side_1 >> side_2 >> side_3;

    if (side_1 + side_2 > side_3 && side_2 + side_3 > side_1 && side_3 + side_1 > side_2)
    {
        cout << "The triangle exists!";
    }
    else 
    {
        cout << "The triangle does not exists!";
    }
    return 0;
}