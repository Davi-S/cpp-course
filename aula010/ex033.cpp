// Create a program that reads 3 number and shows which is the biggest and which is the smallest

#include <iostream>
using namespace std;

int main()
{   
    int n1, n2, n3;
    cout << "Type tree numbers to see the smallest:\n$ ";
    cin >> n1 >> n2 >> n3;

    int minimun = min(n1, n2);
    minimun = min(minimun, n3);

    cout << "The smallest number is " << minimun;

    return 0;
}