#include <iostream>
using namespace std;

int main(int argc, char **argv){
  //declaring variables
  double workHours;
  double grossPay;
  double otHours;
  double witholding;
  double takeHome;
  double payRate = 16.00;
  double otpayRate = 24.00;

  cout << "How many hours did you work this week? ";
  cin >> workHours; //asking for user input for # of hours worked

  //if worked hours is less than or equal to 40
  if(workHours <= 40){
    grossPay = workHours * payRate; //gross pay is calculated using the regular pay rate
  }
  else{
    otHours = workHours - 40;  //find number of hours worked for over time
    grossPay = (workHours * payRate) + (otHours * otpayRate); //gross pay is calculated using regular pay rate plus OT pay rate
  }

  witholding = (((grossPay * 0.94) * 0.86)*0.95)-10; //calculate witholding
  takeHome = grossPay - witholding; //calculate take home pay 

  //print to screen
  cout << "Gross Pay: $" << grossPay << endl;
  cout << "Witholding: $" << witholding << endl;
  cout << "Net take-home pay: $" << takeHome << endl;

  return 0;
}
