#include<iostream>
using namespace std;

class Employee{
private:
    string Name;
    int ID;
    string Department;
    string Position;    

public:
//constructors
    Employee(string name, int id, string department, string position){
        Name = name;
        ID = id;
        Department = department;
        Position = position;
    } 
    Employee(string name, int id){
        Name = name;
        ID = id;
        Department = " ";
        Position = " ";
    }
    Employee(){
        Name = " ";
        ID = 0;
        Department = " ";
        Position = " ";        
    }

    void setName(string name){
        Name = name;
    }
        void setID(int id){
        ID = id;
    }
        void setDepartment(string department){
        Department = department;
    }
        void setPosition(string position){
        Position = position;
    }

    string getName(){
        return Name;
    }
    int getID(){
        return ID;
    }
    string getDepartment(){
        return Department;
    }
    string getPosition(){
        return Position;
    }
};


int main()
{
    Employee employee1 = Employee("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    cout << "Employee 1: " << endl;
    cout << "Name: " << employee1.getName() << endl;
    cout << "ID Number: " << employee1.getID() << endl;
    cout << "Department: " << employee1.getDepartment() << endl;
    cout << "Position: " << employee1.getPosition() << endl << endl;

    cout << "Employee 2: " << endl;
    cout << "Name: " << employee2.getName() << endl;
    cout << "ID Number: " << employee2.getID() << endl;
    cout << "Department: " << employee2.getDepartment() << endl;
    cout << "Position: " << employee2.getPosition() << endl << endl;

    cout << "Employee 3 : " << endl;
    cout << "Name: " << employee3.getName() << endl;
    cout << "ID Number: " << employee3.getID() << endl;
    cout << "Department: " << employee3.getDepartment() << endl;
    cout << "Position: " << employee3.getPosition() << endl << endl;

    return 0;
}