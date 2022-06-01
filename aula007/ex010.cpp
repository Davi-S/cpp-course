// Aula 7
// Create a program that reads how much REAIS a person has in his
// wallet and show how many DOLLARS he can buy.
// Consider US$1.00 = R$3.27

#include <iostream>
using namespace std;

int main()
{
    float reais;
    float dollars = 3.27;
    cout << "How many REAIS do you have in your wallet?\n$ ";
    cin >> reais;
    cout << "With " << reais << " you can buy " << reais/dollars << " dollars";
    return 0;
}