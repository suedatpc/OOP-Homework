//fishing game simulator
#include<iostream>
#include<cstdlib>
using namespace std;

class Die{
public:
//roll the die
    int roll(){
        return rand() % 6 + 1; //random number between (1 , 6) 
    }
};

int main()
{
    srand(time(0));

//variables
    Die die;
    char choice = 'y';
    int points = 0;
    int rollResult;

    while(choice == 'y' || choice == 'Y')
    {
        cout << "Do you want to continue fishing? (y/n): ";
        cin >> choice;
    
    //roll the die
        rollResult = die.roll();

    //determine the item cought and points
        switch (rollResult)
        {
        case 1:
            cout << "You cought a huge fish! (+10 Points)" << endl;
            points += 10;
            break;
        case 2:
            cout << "You cought an old shoe.. (+1 Points)" << endl;
            points += 1;
            break;
        case 3:
            cout << "You caught a.. rock? (0 Points)" << endl;
            points += 0;
            break;
        case 4:
            cout << "You cought something unexpected! (+5 Points)" << endl;
            points += 5;
            break;
        case 5:
            cout << "You cought a little fish (+3 Points)" << endl;
            points += 3;
            break;
        case 6:
            cout << "You caught a bottle (+2 Points)" << endl;
            points += 2;
            break;
        }
    }

    cout << "Total fishing points: " << points << endl;
    if(points > 24){
        cout << "Congratulations! You are a fishing master." << endl;
    }else if(points > 14){
        cout << "Not bad! You've got some good catches." << endl;
    }else{
        cout << "Better luck next time.." << endl;
    }

    return 0;
}