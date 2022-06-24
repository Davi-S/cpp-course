// Create a program that calculates the amount to be paid for a product
// considering its normal price and payment terms
// - cash: 10% discount
// - the view on the card: 5% discount
// - up to 2x on the card: normal price
// - 3x or more on the card: 20% interest

#include <iostream>
using namespace std;

int main()
{
    float normal_price;
    cout << "Item normal price: ";
    cin >> normal_price;

    int payment_method;
    do
    {
        cout << "Payment methods:\n";
        cout << "[1] -> cash: 10% discount\n[2] -> cash by card: 5% discount\n[3] -> 2x card: normal price\n[4] 3x or more on card: 30% interest\n";
        cout << "Your choice: ";
        cin >> payment_method;
    }
    while (payment_method < 0 || payment_method > 4);

    if (payment_method == 1)
    {
        normal_price -= normal_price * 0.1;
    }
    else if (payment_method == 2)
    {
        normal_price -= normal_price * 0.05;
    }
    else if (payment_method == 3)
    {
        // Normal price
    }
    else if (payment_method == 4)
    {
        normal_price += normal_price * 0.3;
    }
    
    cout << "The price now is: " << normal_price;

    return 0;   
}