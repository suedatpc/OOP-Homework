#include<iostream>
#include<cmath>
using namespace std;

class Circle{
private:
    double Radius;
    double Pi = 3.14159;

public:
//default constructor
    Circle(){
        Radius = 0;
    }
//constructor 2
    Circle(double r){
        Radius = r;
    }

    void setRadius(double r){
        Radius = r;
    }

    double getRadius() const { return Radius; }
    double getArea() const { return (Pi * pow(Radius , 2)); }
    double getDiameter() const { return (Radius / 2); }
    double getCircumference() const { return (2 * Pi * Radius); }
};

int main()
{
    double radius;
    cout << "Enter a radius: " ;
    cin >> radius;

    Circle circle = Circle(radius);
    cout << "The circles area is: " << circle.getArea() << endl;
    cout << "Diameter: " << circle.getDiameter() << endl;
    cout << "Circumference: " << circle.getCircumference() << endl;
}