#include <iostream>
#include <ctime>
using namespace std;

int delay(int milliseconds){
  clock_t goal = milliseconds + clock();
  while(goal>clock());
  return 1;
}

class Node {
public:
  int value;
  Node* next;
};
int main() {
  Node* head = nullptr;
  Node* songOne = nullptr;
  Node* songTwo = nullptr;
  Node* songThree = nullptr;
  Node* songFour = nullptr;

  songOne = new Node();
  songTwo = new Node();
  songThree = new Node();
  songFour = new Node();

  songOne->value = 1;
  songTwo->value = 2;
  songThree->value = 3;
  songFour->value = 4;

  songOne->next = songTwo;
  songTwo->next = songThree;
  songThree->next = songFour;
  songFour->next = songOne;

  head = songOne; 

  for (int i = 0; i < 5; i++) { 
    cout << head->value << " \n";
    head = head->next;
    delay(1*1000);
  }

  cout << endl;
  system("pause");
}
