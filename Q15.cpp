#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class MortgagePayment {
private:
  double loanAmount;
  double interestRate;
  int loanTermInYears;

public:
  // Setters
  void setLoanAmount(double amount) {
    if (amount <= 0) {
      cout << "Loan amount cannot be negative!" << endl;
      return;
    }
    loanAmount = amount;
  }

  void setInterestRate(double rate) {
    if (rate <= 0) {
      cout << "Interest rate cannot be negative!" << endl;
      return;
    }
    interestRate = rate;
  }

  void setLoanTermInYears(int years) {
    if (years <= 0) {
      cout << "Loan term cannot be negative!" << endl;
      return;
    }
    loanTermInYears = years;
  }

  // Getters
  double getMonthlyPayment() const {
    double monthlyInterestRate = interestRate / 12.0;
    int totalPayments = loanTermInYears * 12;
    return (loanAmount * monthlyInterestRate) / (1 - pow(1 + monthlyInterestRate, -totalPayments));
  }

  double getTotalPayment() const {
    return getMonthlyPayment() * loanTermInYears * 12;
  }
};

int main() {
  MortgagePayment mortgage;

  double loanAmount, interestRate;
  int loanTermInYears;

  cout << "Enter loan amount: ";
  cin >> loanAmount;
  mortgage.setLoanAmount(loanAmount);

  cout << "Enter interest rate: ";
  cin >> interestRate;
  mortgage.setInterestRate(interestRate);

  cout << "Enter loan term in years: ";
  cin >> loanTermInYears;
  mortgage.setLoanTermInYears(loanTermInYears);

  cout << "Monthly payment: $" << fixed << setprecision(2) << mortgage.getMonthlyPayment() << endl;
  cout << "Total payment: $" << fixed << setprecision(2) << mortgage.getTotalPayment() << endl;

  return 0;
}
