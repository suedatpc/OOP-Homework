#include <iostream>
using namespace std;

class Student{
public:
    string Name;
    string Gender;
    int Age;

    //class method-function
    void IntroduceYourself(){
        cout << "Name - " << Name << endl;
        cout << "Gender - " << Gender << endl;
        cout << "Age - " << Age << endl;
    }

    //contructor-has the same name as the class it belongs to
    Student(string name, string gender, int age){
        Name = name;
        Gender = gender;
        Age = age;
    }
};

int main()
{
    Student student1 = Student("Sueda", "Female", 18);
    student1.IntroduceYourself();

}
