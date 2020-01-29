#include <iostream>
using namespace std;

int main(int argc, char **argv) {

  float cost;
  int yearsFromNow;
  double rate;

  cout << "What is the the current cost of the item? ";
  cin >> cost;
  cout << "How many years from now will the item be purchased? ";
  cin >> yearsFromNow;
  cout << "What is the rate of inflation? (enter as percentage) ";
  cin >> rate;

  rate = rate / 100;
  for(int i = 0; i < yearsFromNow; ++i)
  {
    cost = cost * (1+rate);
  }

  cout << "The expected cost of the item " << yearsFromNow << " is: $" << cost << endl;


  return 0;
}
