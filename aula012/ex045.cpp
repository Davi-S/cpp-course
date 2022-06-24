// Create a program that makes the computer play rock paper scissors

#include <iostream>
#include <time.h>
using namespace std;

int main()
{   
    // 1 == ROCK
    // 2 == SCISSORS
    // 3 == PAPER   

    // computer choice
    srand(time(0));
    int computer_choice = rand() % 3 + 1; // range 1 to 3

    // get user choice
    int user_choice;
    do
    {
        cout << "Make your choice:\n";
        cout << "[1] -> rock\n[2] -> scissors\n[3] -> paper\n";
        cout << "Your choice: ";
        cin >> user_choice;
    }
    while (user_choice < 0 || user_choice > 3);


    string result;
    if (user_choice == computer_choice)
    {
        result = "draw";
    }
    else if ((user_choice == 1 && computer_choice == 2) || (user_choice == 2 && computer_choice == 3) || (user_choice == 3 && computer_choice == 1))
    {
        result = "won";
    }
    else
    {
        result = "lost";
    }

    cout << "The computer has chosen ";
    if (computer_choice == 1)
    {
        cout << "rock";
    }
    else if (computer_choice == 2)
    {
        cout << "scissors";
    }
    else 
    {
        cout << "paper";
    }
    cout << "!!!\n";
    cout << "You " << result << " the game!!!";

    return 0;
}