// Write a program that reads a sentence from the keyboard and displays:
// How many times does the letter "a" appear
// what position does it first appear in
// What position did it last appear in

#include <iostream>
using namespace std;

int main()
{   
    string sentence;
    cout << "Type a short sentence:\n$ ";
    getline(cin, sentence);
    // making everything lowercase so we'll have no problems with sensitive case
    for (auto & c: sentence) c = tolower(c); // I have no idea what is this kind of loop
    
    int letters_a;
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == 'a')
        {
            letters_a++;
        }
    }
    cout << "This sentence has " << letters_a << " letters \"a\" on it\n";

    cout << "The first letter a can be found on the index " << sentence.find_first_of('a') << "\n";

    cout << "The last occourence of the letter \"a\" is on the index number "  << sentence.find_last_of('a');
    return 0;
}