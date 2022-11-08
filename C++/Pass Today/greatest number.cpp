//Name: Gabriel F. Aguilar
//Program No: 7
//Program Name: Greatest Number
//Description: Create a program that inputs three numbers and then it will display the greatest number inputted.
//Date: October 14, 2022

#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "First Number: ";
    cin >> num1;
    cout << "First Number: ";
    cin >> num2;
    cout << "First Number: ";
    cin >> num3;
    if (num1 >= num2 && num1 >= num3 )
    {
        cout << "Largest number: " << num1 <<endl;
    }   else if (num2 >= num1 && num2 >= num3){
        cout << "Largest number: " << num2 <<endl;
    }   else {cout << "Largest number: " << num3 <<endl;}
    
  system("pause")  ;
  return 0;
}
