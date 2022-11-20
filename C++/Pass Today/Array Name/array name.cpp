#include<iostream>
#include<string>
using namespace std;

void input(string studentName[], int count){
    for (int i = 0; i < count; i++)
    {    
        cout << "Input the names(First Name, Last Name): ";
        getline(cin, studentName[i]);
    }
}

void print(string studentName[], int count){
    for (int i=0; i < count; i++)
        cout << studentName[i]<<", ";
        cout << "\n";
}

int main(){
    int count = 10;
    string studentName[count]={};
    input (studentName, count);
    print(studentName, count);
    system("pause");
    return 0;
}