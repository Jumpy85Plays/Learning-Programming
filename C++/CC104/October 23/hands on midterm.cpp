//MidTerms Hands On
//Write a C++ program to reverse the elements of an inputted character using: a. Array b. Linked-list c. Stack d.Queue
// Write a C++ program to reverse the elements of an inputted word using Linked List that stops when a "EXIT" is input
// Program must reverse the letters of the input Example: Gabriel = leirbaG
#include <iostream>
#include <string>
using namespace std;

struct Node {
    char data;
    Node* next;
};

void insert(Node*& head, char data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next!= NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void print(Node* head) {
    Node* current = head;
    while (current!= NULL) {
        cout << current->data;
        current = current->next;
    }
    cout << endl;
}

void reverse(Node*& head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while (current!= NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main() {
    Node* head = NULL;
    string sentence;
    cout << "Enter a sentence to reverse (or 'EXIT' to quit): ";
    while (true) {
        getline(cin, sentence);
        if (sentence == "EXIT") {
            break;
        }
        for (int i = 0; i < sentence.length(); i++) {
            insert(head, sentence[i]);
        }
        reverse(head);
        cout << "Reversed sentence: ";
        print(head);
        reverse(head);
        head = NULL;
    }
    return 0;
}
