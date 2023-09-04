//Name: Gabriel F. Aguilar
//Program No: 3
//Program Name: Math Operations
/*Description: A program that will compute for two numbers. The operations to be performed in the two numbers are
Addition, subtraction, multiplication, division.*/ 
//Date: September 20, 2022

#include <iostream>
#include<string>

using namespace std;

int main() {
//declaring variables:
 int num1, num2;
 int result;
 cout << "Enter the first number: " ;
 cin >> num1;
 cout << "Enter the second number: " ;
 cin >> num2;
//Addition
 cout<< "Addition \n" <<num1 <<" + "<<num2 << " = "<< num1+num2 <<endl;
 cout <<  "The result of the equation is "<< num1 + num2 <<endl;
//Subtraction
 cout<< "Subtraction \n" <<num1 <<" - "<<num2 << " = "<< num1-num2 <<endl;
 cout <<  "The result of the equation is "<< num1 - num2 <<endl;
//Multiplication
 cout<< "Multiplication \n" <<num1 <<" * "<<num2 << " = "<< num1*num2 <<endl;
 cout <<  "The result of the equation is "<< num1 * num2 <<endl;
//Division
 cout<< "Division \n" <<num1 <<" / "<<num2 << " = "<< num1/num2 <<endl;
 cout << "The result of the equation is "<< num1 / num2 <<endl;
//Modulo
 cout<< "Modulo \n" <<num1 <<" % "<<num2 << " = "<< num1%num2 <<endl;
 cout<< "The result of the equation is "<< num1 % num2 <<endl;

system("pause");
return 0;
}
