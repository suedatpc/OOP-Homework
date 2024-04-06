//a game of 21 against the computer
#include<iostream>
#include<cstdlib>
using namespace std;

class Dice{
public:
    //for computer
    int rollDice1(){
        return rand() % 6 + 1; //random number between (1,6)
    }
    //for users
    int rollDice2(){
        return rand() % 6 + 1; 
    }
};

int main()
{
    srand(time(0));

    Dice dice;
    char choice = 'y';
    int ComputerPoints = 0;
    int UserPoints = 0;


    while((choice == 'y' || choice == 'Y') && UserPoints < 21 && ComputerPoints < 21)
    {
        cout << "Do you want to roll a dice? (y/n) : ";
        cin >> choice;
//roll the dice
        int RollResults1 = dice.rollDice1();
        int RollResult2 = dice.rollDice2();
        cout << "You rolled: " << RollResult2 << endl;

        if (UserPoints >= 21) // Game ends if user reaches 21 or more
            break;

        UserPoints += RollResult2;
        ComputerPoints += RollResults1;
    }

    cout << "The total points of computers: " << ComputerPoints << endl;

    cout << "The total point of yours: " << UserPoints << endl;

    if (UserPoints <= 21 && (UserPoints > ComputerPoints || ComputerPoints > 21)) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose..." << endl;
    }

    return 0;
}
