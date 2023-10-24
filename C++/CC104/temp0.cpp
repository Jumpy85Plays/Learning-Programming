//MidTerms Hands On
//Write a C++ program to reverse the elements of an inputted character using: a. Array b. Linked-list c. Stack d.Queue
//B. Linked List

#include<iostream>
#include<queue>
#include<stack>

using namespace std;

struct node{
    string data = "";
    node* next = NULL;
};

// record data using
// a) array b) linklist c) queue d) stack
#define MAXSIZE 255

int main() {
    string temp = "";
    // // a
    // string arrayTemp[MAXSIZE];
    // int words = 0;
    // cout << "Enter a sentence: ";
    // do{
    //     // sentinel statement
    //     if(words >= MAXSIZE){ break; }
        
    //     cin >> temp;

    //     if(temp == "EXIT"){ break; }
        
    //     arrayTemp[words] = temp;
    //     words++;

    // } while(true);

    // for (int i = 0; i < words; i++)
    // {
    //     cout << arrayTemp[i] << " ";
    // }
    
    
    b
    node* head = NULL;
    node* tail = NULL;

    input
    cout << "Enter a sentence: ";
    do
    {
        cin >> temp;
        if(temp == "EXIT"){ break; }
        stack
        new object
        node* newNode = new node();
        add string data
        newNode->data = temp;
        link new node to head
        newNode->next = head;
        replace head with new node
        head = newNode;
    
        // queue
        // new object
    //     node* newNode = new node();
        // add string data
    //     newNode->data = temp;
        
        // check if head is empty
    //     if(head == NULL){ 
    //         head = newNode; 
    //         continue; 
    //     }
        // check if there's nothing next after head
    //     if(head->next == NULL){ 
    //         head->next = newNode; 
    //         tail = newNode;
    //         continue;
    //     }
    //     // links next to tail
    //     tail->next = newNode;
    //     tail = newNode;

    // } while (true);
    // displays
    // while(head != NULL)
    // {
    //     cout << head->data << " ";
    //     head = head->next;
    // }
    
    
    // c
    // stack<string> stackTemp;

    // cout << "Enter a sentence: ";
    // do
    // {
    //     cin >> temp;
    //     if(temp == "EXIT"){ break; }
    //     stackTemp.push(temp);
    // } while (true);
    
    // while (!stackTemp.empty())
    // {
    //     cout << stackTemp.top() << " ";
    //     stackTemp.pop();
    // }
    
    
    // d
    // queue<string> queueTemp;
    // cout << "Enter a sentence: ";
    // // record
    // do
    // {
    //     cin >> temp;
    //     if(temp == "EXIT"){ break; }
    //     queueTemp.emplace(temp);
    // } while (true);
    // // display
    // while (!queueTemp.empty())
    // {
    //     cout << queueTemp.front() << " ";
    //     queueTemp.pop();
    // }
    
    return 0;
}