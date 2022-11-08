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
using std::ios;
#include<iomanip>
using std::setprecision;
using std::setiosflags;

int main(){
    int total,        //sum of grades
        gradeCounter, //number of grades entered
        grade;        //one grade
    double average;   
    //initialization phase
    total = 0;
    gradeCounter = 0;
    //processing phase
    cout<<"Enter grade, -1 to end: ";
    cin>> grade;
    while ( grade != -1 ) {
        total = total + grade;
        gradeCounter = gradeCounter + 1;
    cout<<"Enter grade, -1 to end: ";
    cin>> grade;   
    }

    //termination phase
    if ( gradeCounter != 0 ) {     
    average = static_cast< double >( total ) / gradeCounter;
    cout << "Class average is " << setprecision( 2 )
         << setiosflags( ios::fixed | ios::showpoint )
         << average << endl;
    } else{
        cout << "No grades were entered" << endl;
        return 0;   // indicate program ended successfully

    }
system("pause");
return 0;
}
