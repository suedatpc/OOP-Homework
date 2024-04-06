#include <iostream>
#include <cstdlib> // For exit function
using namespace std;

class Date {
private:
    int Month;
    int Day;
    int Year;

public:
    // Constructor
    Date(int day, int month, int year) {
        Day = day;
        Month = month;
        Year = year;
    }

    // Class method to check and set date
    void Checking() {
        if (Day > 0 && Day <= 31)
            Day = day;
        else{
            cout << "Invalid day!" << endl;
            exit(1);
        }
        if (Month > 0 && Month <= 12)
            Month = Month;
        else{
            cout << "Invalid month!" << endl;
            exit(1);
        }

        Year = year;
    }

    // Method to format and print date
    void DateFormat1() {
        cout << Month << "/" << Day << "/" << Year << endl;
    }
    void DateFormat2(){
        string Months[] = {"January", "February", "March", "April", "May", "June", "July", "August","September", "October", "November", "December"};
        cout << Months[Month] << " " << Day << " " << Year << endl;
    }
    void DateFormat3(){//25 December 2014
        string Months[] = {"January", "February", "March", "April", "May", "June", "July", "August","September", "October", "November", "December"};
        cout << Day << " " << Months[Month] << " " << Year << endl;
    }
};

int main() {
    int day, month, year;
    cout << "Enter day, month and a year by number: ";
    cin >> day >> month >> year;

    Date date1(day, month, year);
    date1.Checking(); //to check the date after setting it
    cout << "Date in format 1: ";
    date1.DateFormat1();
    cout << "Date in format 2: ";
    date1.DateFormat2();
    cout << "Date in format 3: ";
    date1.DateFormat3();

    return 0;
}
