//encapsulation
#include<iostream>
using namespace std;

class Student{
private:
    string Name;
    int Age;

public: //using getters and setters
    void setName(string name){
        Name = name;
    }
    string getName(){ //getters do not take parameters.It's just retrieving data, not setting it.
        return Name;
    }

    void setAge(int age){
        Age = age;
    }
    int getAge(){
        return Age;
    }

};

int main()
{
    Student student1;
    student1.setName("Sueda");
    student1.setAge(18);
    cout << student1.getName() << " is " << student1.getAge() << " years old.";
    

}