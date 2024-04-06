#include<iostream>
using namespace std;

class TestScores{
private:
    double Score1;
    double Score2;
    double Score3;

public:
    TestScores(double s1, double s2, double s3){
        Score1 = s1;
        Score2 = s2;
        Score3 = s3;
    }

//Mutator Functions = setters
    void setScore1(double s1){
        Score1 = s1;
    }
    void setScore2(double s2){
        Score2 = s2;
    }
    void setScore3(double s3){
        Score3 = s3;
    }

//Accessor Functions = getters
    double getScore1() const{
        return Score1;
    }
    double getScore2() const {return Score2;}
    double getScore3() const {return Score3;}


    double CalculateAverage(){
        return (Score1 + Score2 + Score3) / 3.0;
    }
};

int main()
{
    double score1,score2,score3;
    cout << "Enter 3 scores: " ;
    cin >> score1 >> score2 >> score3 ;

    TestScores Scores(score1, score2, score3);
    cout << "\nThe Average is: " << Scores.CalculateAverage();
}