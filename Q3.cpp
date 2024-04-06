#include<iostream>
using namespace std;

class Car{
private:
    int YearModel;
    string Make;
    int Speed;

public:
    Car(int yearModel, string make, int speed){
        YearModel = yearModel;
        Make = make;
        Speed = 0;
    }

    void setYearModel(int yearmodel){
        YearModel = yearmodel;
    }
    void setMake(string make){
        Make = make;
    }
    void setSpeed(int speed){
        Speed = speed;
    }
    int getYearModel(){
        return YearModel;
    }
    string getMake(){
        return Make;
    }
    int getSpeed(){
        return Speed;
    }

//class methods-functions
    void accelerate(){
        Speed += 5;
    }
    void brake(){
        Speed -= 5;
    }
};

int main()
{
    Car car1 = Car(2024, "Porche", 0);

    for(int i = 0; i < 5; i++){
        car1.accelerate();
        cout << "Current speed after accelerating: " << car1.getSpeed() << endl;
    }

    for(int j = 0; j < 5; j++){
        car1.brake();
        cout << "Current speed after braking: " << car1.getSpeed() << endl;
    }

    return 0;
}

