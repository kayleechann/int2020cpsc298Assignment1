#include <iostream>
using namespace std;

int main(int argc, char **argv){
  int maxRoomCapacity;
  int numPeople;
  int remainingPeople;

  cout << "How many people are in the room? ";
  cin >> numPeople;
  cout << "What is the maximum room capacity? ";
  cin >> maxRoomCapacity;

  if (numPeople <= maxRoomCapacity){
    remainingPeople = maxRoomCapacity - numPeople;
    cout << "meeting is legal! " << remainingPeople << " additional people may legally attend the meeting." << endl;
  }
  else{
    remainingPeople = numPeople - maxRoomCapacity;
    cout << "meeting is not legal due to fire regulations. " << remainingPeople << " or more people must be excluded to meet fire regualtions. " << endl;
  }

  return 0;
}
