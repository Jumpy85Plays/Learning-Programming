Make it so you can input a sentence into the program without seperating the words in output 
 
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
    string word;
    cout << "Enter a word to reverse (or 'EXIT' to quit): ";
    while (true) {
        cin >> word;
        if (word == "EXIT") {
            break;
        }
        for (int i = 0; i < word.length(); i++) {
            insert(head, word[i]);
        }
        reverse(head);
        cout << "Reversed word: ";
        print(head);
        reverse(head);
        head = NULL;
    }
    return 0;
    system("PAUSE");
}
