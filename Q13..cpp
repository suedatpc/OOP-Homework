#include <iostream>
#include <cstdlib> // For srand and rand functions
using namespace std;

class Coin{
private:
    string SideUp;

public:
    Coin() {
        toss();
    }

    void toss() {
        // Generate a random number (0 or 1)
        int randomNumber = rand() % 2;

        // Set the side of the coin based on the random number
        if (randomNumber == 0)
            SideUp = "heads";
        else
            SideUp = "tails";
    }

    string getSideUp() {
        return SideUp;
    }
};

int main() {
    // Initialize random seed
    srand(time(0));

    // Create instances of Coin class representing quarter, dime, and nickel
    Coin quarter, dime, nickel;

    double balance = 0.0;
    int numHeads = 0, numTails = 0;

    // Game loop
    while (balance < 1.0) {
        // Toss the coins
        quarter.toss();
        dime.toss();
        nickel.toss();

        // Update balance based on the outcome of the coin tosses
        if (quarter.getSideUp() == "heads")
            balance += 0.25;
        if (dime.getSideUp() == "heads")
            balance += 0.10;
        if (nickel.getSideUp() == "heads")
            balance += 0.05;

        // Update number of heads and tails
        if (quarter.getSideUp() == "heads")
            numHeads++;
        else
            numTails++;

        if (dime.getSideUp() == "heads")
            numHeads++;
        else
            numTails++;

        if (nickel.getSideUp() == "heads")
            numHeads++;
        else
            numTails++;
    }

    // Game outcome
    if (balance == 1.0) {
        cout << "Congratulations! You win the game!" << endl;
    } else {
        cout << "Sorry! You lose the game!" << endl;
    }

    // Display number of heads and tails
    cout << "Number of heads: " << numHeads << endl;
    cout << "Number of tails: " << numTails << endl;

    return 0;
}
