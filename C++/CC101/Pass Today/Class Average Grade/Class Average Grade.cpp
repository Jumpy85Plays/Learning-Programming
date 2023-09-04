//Name: Gabriel F. Aguilar
//Program No: 
//Program Name: Math Operations using Switches
/*Description: A program that will compute for two numbers. The operations to be performed in the two numbers are
Addition, subtraction, multiplication, division.*/ 
//Date: September 27, 2022

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int total,
        gradeCounter,
        grade,
        average;

total = 0;          //clear total
gradeCounter = 1;   //prepare to loop

//processing phase
while (gradeCounter <= 10){
    cout << "Enter grade: ";
    cin >> grade;
    total = total + grade;
    gradeCounter = gradeCounter + 1;
}
//termination phase
average = total/10;
cout << "Class average is " << average << "." <<endl;

system("pause");
return 0;
}
