#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  //declaring variables
  float cost;
  int yearsFromNow;
  double rate;

  cout << "What is the the current cost of the item? ";
  cin >> cost; //get current cost of item from user
  cout << "How many years from now will the item be purchased? ";
  cin >> yearsFromNow; //get years from now from user
  cout << "What is the rate of inflation? (enter as percentage) ";
  cin >> rate; //get inflation rate

  rate = rate / 100; //find rate in percent

  for(int i = 0; i < yearsFromNow; ++i)
  {
    cost = cost * (1+rate); //calculate the expected cost
  }

  cout << "The expected cost of the item " << yearsFromNow <<" years from now is: $" << cost << endl; //print to screen the expected cost


  return 0;
}
