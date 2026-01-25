#include <bits/stdc++.h>
using namespace std;

int getUserChoice();
int getComputerChoice();
void checkWinner(int userChoice, int computerChoice);



int getUserChoice()
{
    int choice;
    do
    {
        cout << "Choose an option:\n";
        cout << "1. ROCK\n 2. PAPER\n 3. SCISSORS\n";
        cout << "Enter your pick: ";
        cin >> choice;
    } while (choice < 1 || choice > 3);

    return choice;
}

int getComputerChoice()
{
    return (rand() % 3) + 1;
}

void checkWinner(int userChoice, int computerChoice)
{
    if (userChoice == computerChoice)
    {
        cout << "It's a Tie!\n";
    }
    else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2))
    {
        cout << "You Win!\n";
    }
    else
    {
        cout << "You Lose!\n";
    }
}

int main()
{
    srand(time(NULL));
    cout << "ROCK PAPER SCISSORS GAME!\n";

    int userChoice = getUserChoice();
    int computerChoice = getComputerChoice();

    switch (userChoice)
    {
    case 1: cout << "You Chose ROCK!\n"; break;
    case 2: cout << "You Chose PAPER!\n"; break;
    case 3: cout << "You Chose SCISSORS!\n"; break;
    }

    switch (computerChoice)
    {
    case 1: cout << "Computer Chose ROCK!\n"; break;
    case 2: cout << "Computer Chose PAPER!\n"; break;
    case 3: cout << "Computer Chose SCISSORS!\n"; break;
    }

    checkWinner(userChoice, computerChoice);

    return 0;
}














