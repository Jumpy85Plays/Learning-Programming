//Name: Gabriel F. Aguilar
//Program No: 
//Program Name: Student Information
//Description: A program that will display the student information given by the user.
//Date: September 13, 2022

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

int main(){
    string yourName;
    string course;
    string age;

    cout << "Enter your full Name: ";
    getline(cin, yourName);
    cout << "Enter your age: ";
    getline(cin, age);
    stringstream(age) >> age;
    cout << "Enter your Course: ";
    getline(cin,course);
    

    cout << "Your name is " <<yourName <<" , your age is  "<< age <<" and your course is " <<course <<"."<<endl;
   
system("pause");
return 0;
}
