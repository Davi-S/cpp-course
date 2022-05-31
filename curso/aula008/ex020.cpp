// Aula 8
// Write a program that reads 4 numbers and displays the order drawn

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums;
    cout << "Type four numbers:\n$ ";
    for (int i = 3; i >= 0; i--)
    {   
        int add;
        cin >> add;
        nums.push_back(add);
    }

    random_shuffle(nums.begin(), nums.end());
    cout << "The random order is:\n";

    for (int i = 3; i >= 0; i--)
    {   
        cout << nums[i];
    }
    
    return 0;
}