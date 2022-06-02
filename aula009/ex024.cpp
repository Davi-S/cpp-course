// Create a program that reads the name of a city and tells whether or not it starts with "San"

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string city;
    cout <<  "Type the city name:\n$ ";
    cin >> city; // only collect input before space
    for (auto & c: city) c = tolower(c);

    if (city == "san")
    {
        cout << "City does starts with \"San\"\n";
    }
    
    else
    {
        cout << "City does not starts with \"San\"\n";
    }

    return 0;
}