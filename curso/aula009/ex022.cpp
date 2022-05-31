// Write a program that reads a person's full name and displays: 
// The name in all uppercase and lowercase letters.
// How many letters in total (not including spaces). 
// How many letters are in the first name.

#include <iostream>
#include <string>
using namespace std;

int main()
{   
    cout << "What's your full name?\n$ ";

    // Get input with spaces
    char name[50];
    cin.getline(name, sizeof(name));
    string str(name);

    cout << "Your name is: " << name << "\n";

    // upper case
    char name_upper[50];
    for (int i = 0; i < sizeof(name); i++)
    {
        name_upper[i] = toupper(name[i]);
    }
    cout << "All upper case: " << name_upper << "\n";

    // lower case
    char name_lower[50];
    for (int i = 0; i < sizeof(name); i++)
    {
        name_lower[i] = tolower(name[i]);
    }
    cout << "All lower case: " << name_lower << "\n";

    // total leters TODO 
    cout << sizeof(name);


    return 0;
}