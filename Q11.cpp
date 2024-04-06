#include <iostream>
using namespace std;

class PayRoll {
private:
    double hourlyPayRate;
    double hoursWorked;

public:
    void setHourlyPayRate(double rate) {
        hourlyPayRate = rate;
    }

    void setHoursWorked(double hours) {
        hoursWorked = (hours <= 60) ? hours : 60;
    }

    double getTotalPay() const {
        return hourlyPayRate * hoursWorked;
    }
};

int main() {
    const int NUM_EMPLOYEES = 7;
    PayRoll employees[NUM_EMPLOYEES];
    double hours, hourlyPayRate;

    cout << "Enter the number of hours worked for each employee:\n";
    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        cout << "Employee " << i + 1 << ": ";
        cin >> hours;
        employees[i].setHoursWorked(hours);
    }

    cout << "Enter the hourly pay rate for all employees: ";
    cin >> hourlyPayRate;

    for (int i = 0; i < NUM_EMPLOYEES; ++i) {
        employees[i].setHourlyPayRate(hourlyPayRate);
        cout << "Gross pay for Employee " << i + 1 << ": $" << employees[i].getTotalPay() << std::endl;
    }

    return 0;
}

