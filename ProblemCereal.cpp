#include <iostream>
using namespace std;

int main(int argc, char **argv){
  double cerealWeight; //weight of cereaal in ounces as double
  double metricTons; //declare metricTons as double
  int numBoxes; //declare numBoxes as int
  double conversion = 35273.92; //instantiating the conversion variable as a constant in the program

  cout << "What is the weight of the cereal in ounces: "; // ask for user input
  cin >> cerealWeight; //get user input for cerealWeight

  metricTons = cerealWeight / conversion; //calculate metricTons
  numBoxes = conversion / cerealWeight; //calculate number of boxes to yield one metric ton of cereal

  cout << "Weight of cereal in metric tons: " << metricTons << endl; //print weight of cereal in metric tons
  cout << "Number of boxes to yield one metric ton: " << numBoxes << endl; //print numBoes of cereal to equal one metric ton

  return 0; //end program
}
