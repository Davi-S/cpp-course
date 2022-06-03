// Create a program that reads a person's name and tells if he has "Smith" in the name

#include <iostream>
using namespace std;

int main()
{
    cout << "What's your full name?\n$ ";    
    string name;
    getline(cin, name); // Get input with spaces
    
    // making everything lowercase so we'll have no problems with sensitive case
    for (auto & c: name) c = tolower(c); // I have no idea what is this kind of loop
    
    int space; // where is the space on the name
    int from = 0; // from where to search for the space
    string search; // the string to analize
    bool found = false; // if smith was found

    name += ' '; // adding a last space on the name so the loop can pass for the last name
    while (true)
    {      
        search = "";
        space = name.find(' ', from);
        if (space != -1)
        {   
            for (int i = from; i < space; i++)
            {
                search += name[i];
            }
            if (search == "smith")
            {   
                found = true;
                break;
            }
            
            from = space +1;
            continue;
        }
        break;
    }

    if (found)
    {
        cout << "You does have \"Smith\" in your name";
    }

    else
    {
        cout << "You does not have \"Smith\" in your name";
    }


    return 0;
}