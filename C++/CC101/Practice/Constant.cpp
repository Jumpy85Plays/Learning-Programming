//Name: Gabriel F. Aguilar
//Program No: 4
//Program Name: Constant
//Description: A program that will display constant variables on screen.
//Date: September 13, 2022

#include <iostream>
using namespace std;
 //using const(constant)
 /*#const PI 3.14159
 #const NEWLINE '\n'

 int main()
 {
    double r=5.0 ;       // radius
    double circle;

    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;

 }*/
    //Using #define instead of constant(const)
    #define PI 3.14159
    #define NEWLINE '\n'

    int main()
 {
    double r=5.0 ;       // radius
    double circle;

    circle = 2 * PI * r;
    cout << circle;
    cout << NEWLINE;
 }