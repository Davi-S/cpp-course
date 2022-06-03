// Write a program that reads a person's full name, then displays the first and last name separately.
// EX:
// full name = Ann Smith McKlein
// first = Ann
// last = McKlein

#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "What's your full name?\n$ ";    
    getline(cin, name); // Get input with spaces

    string first_name, last_name;
    for (int i = 0; i < name.find_first_of(' '); i++)
    {
        first_name += name[i];
    }
    
    for (int i = name.find_last_of(' ') + 1; i < name.length(); i++) // "+1" to not catch the actual space
    {
        last_name += name[i];
    }

    cout << "Your full name is: " << name << "\n";
    cout << "Your first name is: " << first_name << "\n";
    cout << "Your last name is: " << last_name << "\n";
    return 0;
}