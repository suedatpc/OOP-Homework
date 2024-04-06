#include<iostream>
using namespace std;

class Info{
private:
    string Name;
    string Address;
    int Age;
    int PhoneNumber;

public:

    void setName(string name){
        Name = name;
    }
    void setAddress(string address){
        Address = address;
    }
    void setAge(int age){
        Age = age;
    }
    void setPhoneNumber(int phoneNumber){
        PhoneNumber = phoneNumber;
    }
    string getName(){
        return Name;
    }
    string getAddress(){
        return Address;
    }
    int getAge(){
        return Age;
    }
    int getPhoneNumber(){
        return PhoneNumber;
    }

};

int main()
{
    Info myInfo;
    Info friend1;
    Info friend2;

    myInfo.setName("Sueda");
    myInfo.setAddress("My address");
    myInfo.setAge(18);
    myInfo.setPhoneNumber(1111111111);

    
    friend1.setName("Friend 1's Name");
    friend1.setAddress("Friend 1's Address");
    friend1.setAge(19);
    friend1.setPhoneNumber(2222222222);

    
    friend2.setName("Friend 2's Name");
    friend2.setAddress("Friend 2's Address");
    friend2.setAge(21);
    friend2.setPhoneNumber(3333333333);

    
    cout << "My Information:" << endl;
    cout << "Name: " << myInfo.getName() << endl;
    cout << "Address: " << myInfo.getAddress() << endl;
    cout << "Age: " << myInfo.getAge() << endl;
    cout << "Phone Number: " << myInfo.getPhoneNumber() << endl << endl;

    cout << "Friend 1's Information:" << endl;
    cout << "Name: " << friend1.getName() << endl;
    cout << "Address: " << friend1.getAddress() << endl;
    cout << "Age: " << friend1.getAge() << endl;
    cout << "Phone Number: " << friend1.getPhoneNumber() << endl << endl;

    cout << "Friend 2's Information:" << endl;
    cout << "Name: " << friend2.getName() << endl;
    cout << "Address: " << friend2.getAddress() << endl;
    cout << "Age: " << friend2.getAge() << endl;
    cout << "Phone Number: " << friend2.getPhoneNumber() << endl;

    return 0;
}

