// Write a program that reads a person's full name and displays: 
// The name in all uppercase and lowercase letters.
// How many letters in total (not including spaces). 
// How many letters are in the first name.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{   
    cout << "What's your full name?\n$ ";    
    string name;
    getline(cin, name); // Get input with spaces
    cout << "Your name is: " << name << "\n";

    // upper case
    for (auto & c: name) c = toupper(c); // I have no idea what is this kind of loop
    cout << "All upper case: " << name << "\n";

    // lower case
    for (auto & c: name) c = tolower(c); // I have no idea what is this kind of loop
    cout << "All lower case: " << name << "\n";

    // total leters without spaces
    int from;
    int space_count = 0;
    for (int i = 0; i < name.length(); i++)
    {   
        int space = name.find(" ", from);          
        if (space == -1) // There is no more occourences of spaces
        {
            break;
        }
        from = space + 1;
        space_count++;
    }
    cout << "Total letters without spaces: " << name.length() - space_count << "\n";

    // total letters in the first name
    cout << "Letter in your first name: " << name.find(" ") << "\n";
    
    return 0;
}