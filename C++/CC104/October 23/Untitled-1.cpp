Write a C++ program to reverse the elements of an inputted word using Linked List that stops when a "EXIT" is input Program must reverse the letters of the input Example: Gabriel = leirbaG
#include<iostream>
#include<string>
using namespace std;

struct node{
    string data;
    node* next = NULL;
};
#define MAXSIZE 255

int main(){
string temp ;
node* head = NULL;
  cout << "Enter a sentence: ";
  do
  {
  cin >> temp;
  if(temp == "EXIT"){ break; }
  node* newNode = new node();
  newNode->data = temp;
  newNode->next = head;
  head = newNode;
}while (true);
{
  while(head != NULL)
  {
      cout << head->data << " ";
      head = head->next;
  }
}
return 0;
system("PAUSE");
}