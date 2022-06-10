// Redo the challenge 35 (tringles), adding the feature to show what type of triangle the triangle is:
// equilateral
// isosceles
// scalene

#include <iostream>
using namespace std;

int main()
{
    int side_1, side_2, side_3;
    cout << "Type the 3 sides to see if the triangle exists:\n$ ";
    cin >> side_1 >> side_2 >> side_3;

    bool exists = (side_1 + side_2 > side_3) && (side_2 + side_3 > side_1) && (side_3 + side_1 > side_2);
    
    if (exists)
    {   
        cout << "The triangle exists\n";
        string type;
        if ((side_1 != side_2) && (side_2 != side_3) && (side_3 != side_1))
        {
            type = "scalene";
        }
        else if (side_1 == side_2 == side_3)
        {
            type = "equilateral";
        }
        else //(side_1 != side_2 && side_1 == side_3) || (side_2 != side_3 && side_2 == side_1) || (side_3 != side_1 && side_3 == side_2)
        {
            type = "isosceles";
        }   
        cout << "The triangle type is " << type << "\n";
    }
    else
    {
        cout << "This triangle cannot exist\n";
    }
    
}