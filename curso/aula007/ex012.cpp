// Aula 7
// Make an algorithm that reads the price of a product 
// and displays its new price with a 5% discount

#include <iostream>
using namespace std;

const float discount = 0.05; // represents 5% discount
int main()
{   
    float originalPrice, discountPrice;
    cout << "What's the product price:\n$ ";
    cin >> originalPrice;
    discountPrice = originalPrice - (originalPrice * discount);
    cout << "This product new price is " << discountPrice;
    return 0;
}