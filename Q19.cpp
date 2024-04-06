//Trivia Game
#include<iostream>
#include<string>
using namespace std;

class Question{
private:
    string question;
    string answers[4];
    int CorrectAnswer;

public:
// Constructor
    Question(string q, string ans1, string ans2, string ans3, string ans4, int correct){
        question = q;
        CorrectAnswer = correct;
        answers[0] = ans1;
        answers[1] = ans2;
        answers[2] = ans3;
        answers[3] = ans4;
    }

    // Getters
    string getQuestion() const { return question; }
    string getAnswer(int index) const { return answers[index]; }
    int getCorrectAnswer() const { return CorrectAnswer; }
};

int main() {
    Question questions[] = {
        Question("What is the capital of France?", "London", "Paris", "Berlin", "Rome", 2),
        Question("What is the largest planet in our solar system?", "Mars", "Jupiter", "Venus", "Saturn", 2),
        Question("Which country is known as the Land of the Rising Sun?", "China", "Japan", "India", "Australia", 2),
        Question("Who wrote 'Romeo and Juliet'?", "William Shakespeare", "Charles Dickens", "Jane Austen", "Mark Twain", 1),
        Question("What is the chemical symbol for water?", "H2O", "NaOH", "NaCl", "HCl", 1),
        Question("Which mammal can fly?", "Bat", "Cat", "Dog", "Elephant", 1),
        Question("What is the tallest mountain in the world?", "Mount Kilimanjaro", "Mount Everest", "Mount Fuji", "Mount Rushmore", 2),
        Question("Who painted the Mona Lisa?", "Leonardo da Vinci", "Pablo Picasso", "Vincent van Gogh", "Michelangelo", 1),
        Question("What is the largest ocean on Earth?", "Atlantic Ocean", "Indian Ocean", "Arctic Ocean", "Pacific Ocean", 4),
        Question("What is the chemical symbol for gold?", "Go", "Au", "Gl", "Gd", 2)
    };
    
    int player1Score = 0;
    int player2Score = 0;

    for (int i = 0; i < 5; ++i) {
        cout << "Question " << (i + 1) << " (Player 1): " << endl;
        cout << questions[i].getQuestion() << endl;
        for (int j = 0; j < 4; ++j) {
            cout << questions[i].getAnswer(j) << endl;
        }
        int choice;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        if (choice == questions[i].getCorrectAnswer()) {
            cout << "Correct! You earned a point." << endl;
            player1Score++;
        } else {
            cout << "Incorrect! The correct answer is: " << questions[i].getCorrectAnswer() << endl;
        }

        cout << endl;

        cout << "Question " << (i + 1) << " (Player 2): " << endl;
        cout << questions[i+5].getQuestion() << endl;
        for (int j = 0; j < 4; ++j) {
            cout << questions[i+5].getAnswer(j) << endl;
        }
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        if (choice == questions[i+5].getCorrectAnswer()) {
            cout << "Correct! You earned a point." << endl;
            player2Score++;
        } else {
            cout << "Incorrect! The correct answer is: " << questions[i+5].getCorrectAnswer() << endl;
        }

        cout << endl;
    }

    cout << "Player 1's score: " << player1Score << endl;
    cout << "Player 2's score: " << player2Score << endl;

    if (player1Score > player2Score) {
        cout << "Player 1 wins!" << endl;
    } else if (player2Score > player1Score) {
        cout << "Player 2 wins!" << endl;
    } else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
