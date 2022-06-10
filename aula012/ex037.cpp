// Write a program that reads any decimal number
// and asks the user to choose what the conversion base will be.
// 1 - binary
// 2 - octal
// 3 - hexadecimal

#include <iostream>
#include <string>
using namespace std;

int to_binary(int decimal);
int to_octal(int decimal);
string to_hex(int decimal);

int main()
{
    int decimal;
    cout << "Type a number: ";
    cin >> decimal;
    
    int binary = to_binary(decimal);
    int octal = to_octal(decimal);
    string hexadecimal = to_hex(decimal);

    cout << "binary: " << binary << "\noctal: " << octal << "\nhexadecimal: " << hexadecimal << "\n";
    return 0;
}

int to_binary(int decimal)
{   
    // during the loop, the binary is represented as a string to facilitate concatenation
    string remainder; 
    while (true)
    {   
        remainder = to_string(decimal % 2) + remainder;
        if (decimal == 0)
        {
            break;
        }
        decimal = decimal / 2;
    }
    // returned as a int 
    return stoi(remainder);
}

int to_octal(int decimal)
{
    // during the loop, the octal is represented as a string to facilitate concatenation
    string remainder; 
    while (true)
    {   
        remainder = to_string(decimal % 8) + remainder;
        if (decimal < 8)
        {   
            break;
        }
        decimal = decimal / 8;
    }
    // returned as a int 
    return stoi(remainder);
}

string to_hex(int decimal)
{
    // during the loop, the hexadecimal is represented as a string to facilitate concatenation
    string result; 
    while (true)
    {   
        int remainder = decimal % 16;
        // transform number greater than 10 into letters
        if (remainder >= 10)
        {
            result = (char)(remainder - 10 + 'A') + result;
        }
        else
        {
            result = to_string(remainder) + result;
        }

        if (decimal < 16)
        {   
            break;
        }
        decimal = decimal / 16;
    }
    // returned as a int 
    return result;
}