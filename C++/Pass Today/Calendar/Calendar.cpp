//Name: Gabriel F. Aguilar
//Program No: 
//Program Name: Date Program
//Description: A program that will display the date that the user inputs  
//Date: September 25, 2022

#include<iostream>
#include<string>
#include<sstream>

using namespace std;


int main(){
    //declaring of variables
    int day;
    int monthInput;
    string monthOutput;
    int year;
    
    //input
    cout << "Input the day: ";
    cin >> day;
    cout << "Input the month: ";
    cin >> monthInput;
    cout << "Input the year: ";
    cin >> year;
    //error checks
    if (day <= 0 || day > 31){
        cerr << "Invalid Date" <<endl;
        system("pause");
        return 1;
    }
    if (year <= 0){
        cerr << "Invalid Year" <<endl;
        system("pause");
        return 1;
    }
    //check for leap years
    if (year % 4 == 0 && monthInput == 2 && day >29){
        cerr << "Invalid Date";
        system("pause");
        return 1;
    } else if(monthInput == 2 && day >28){
        cerr << "Invalid Date";
        system("pause");
        return 1;
    }
    //Process
    switch(monthInput){
        case 1:
        monthOutput = "January";
        break;
        case 2:
        monthOutput = "February";
        break;
        case 3:
        monthOutput = "March";
        break;
        case 4:
        monthOutput = "April";
        break;
        case 5:
        monthOutput = "May";
        break;
        case 6:
        monthOutput = "June";
        break;
        case 7:
        monthOutput = "July";
        break;
        case 8:
        monthOutput = "August";
        break;
        case 9:
        monthOutput = "September";
        break;
        case 10:
        monthOutput = "October";
        break;
        case 11:
        monthOutput = "November";
        break;
        case 12:
        monthOutput = "December";
        break;

        default:
        cerr << "Invalid Month";
        system("pause");
        return 0;

    }
    //Output
    cout << "The date right now is " <<monthOutput <<"/"<<day<<"/"<<year<<"." <<endl;

system("pause");
return 0;
}