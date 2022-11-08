//Name: Gabriel F. Aguilar
//Program No: 7
//Program Name: My Name
//Description: A program that will display the student information given by the user.
//Date: September 13, 2022

#include<iostream>
#include<string>

using namespace std;

int main(){
    string firstName;
    string middleName;
    string lastName;

    cout << "Enter your First Name: ";
    getline(cin, firstName);
    cout << "Enter your Middle Name: ";
    getline(cin, middleName);
    cout << "Enter your Last Name: ";
    getline(cin, lastName);

    cout << "You are " <<firstName<<" "<<middleName<<" "<<lastName<<"."<<endl;
    
   
system("pause");
return 0;
}
