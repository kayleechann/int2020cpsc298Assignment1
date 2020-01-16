#include <iostream>
using namespace std;

int main(int argc, char **argv){
  double workHours;
  double grossPay;
  double otHours;
  double witholding;
  double takeHome;
  double payRate = 16.00;
  double otpayRate = 24.00;

  cout << "How many hours did you work this week? ";
  cin >> workHours;

  if(workHours <= 40){
    grossPay = workHours * payRate;
  }
  else{
    otHours = workHours - 40;
    grossPay = (workHours * payRate) + (otHours * otpayRate);
  }

  witholding = (((grossPay * 0.94) * 0.86)*0.95)-10;
  takeHome = grossPay - witholding;

  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Witholding: $" << witholding << endl;
  cout << "Net take-home pay: $" << takeHome << endl;

  return 0;
}
