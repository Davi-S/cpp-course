// Create a program that reads the distance of a trip in km.
// Calculate the ticket price, charging US$0.50 for each km until to 200km
// and US$0.45 for longer trips

#include <iostream>
using namespace std;

int main()
{
    float trip_distance, ticket;
    cout << "What was the trip distance in Km?\n$ ";

    // Loop to not get negative trip distances
    do
    {
        cin >> trip_distance;
    } while (trip_distance < 0);
    
    

    if (trip_distance <= 200)
    {
        ticket = trip_distance * 0.5;
    }

    else
    {
        ticket = (200 * 0.5) + ((trip_distance - 200) * 0.45);
    }

    cout << "The ticket is: U$" << ticket;
    return 0;
}