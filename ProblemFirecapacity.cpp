#include <iostream>
using namespace std;

int main(int argc, char **argv){
  //declare variables
  int maxRoomCapacity;
  int numPeople;
  int remainingPeople;

  cout << "How many people are in the room? ";
  cin >> numPeople; //get user inout
  cout << "What is the maximum room capacity? ";
  cin >> maxRoomCapacity; //get max room capacity

  //if the number of people is less than or equal to maxRoomCapacity
  if (numPeople <= maxRoomCapacity){
    remainingPeople = maxRoomCapacity - numPeople; //meeting is legal
    cout << "meeting is legal! " << remainingPeople << " additional people may legally attend the meeting." << endl;
  }
  else{ //if number of people exceeds maxRoomCapacity
    remainingPeople = numPeople - maxRoomCapacity;
    cout << "meeting is not legal due to fire regulations. " << remainingPeople << " or more people must be excluded to meet fire regualtions. " << endl;
  } //calculate people who must leave

  return 0;
}
