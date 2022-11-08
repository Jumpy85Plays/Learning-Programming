//Name: Gabriel F. Aguilar
//Hands On Quiz 1 
//Program Name: Monthly Salary
/*Goal: To create a program that will display the name of an employee, it's number of years working, and it's monthly
salary basing on:
if the employee is working for more than 5 years, an additional 5% is added to their mnothly salary.  */
// if the employee is working for more than 10 years, an additional 10% is added to their monthly salary
// if below 5 years, no additional is added.
// Employee Salary is computed by:
// Hours worked/day - minimum 8 hours, more than that is considered overtime 
// ₱360/hour | Working Days = 20 days   | USE CONDITIONAL OPERATOR
//Date: September 15, 2022

#include<iostream>
#include<string>
// (declaration/variable)
using namespace std;
int main()
{
int employeeName;
cout << "Input your Name here: " ;
getline(cin, employeeName);
int yearsWorking;
cout << "Put years worked here: " ;
cin >> yearsWorking;
float hoursWorkedPerHour = 8.5;
float hoursWorked;
int basePayPerHour = 360;
int workDays = 20; 
float monthlySalary;
float employeeSalary;
float overtime;
float overtimeWorked;
float overtimePerHour;
float overtimeBasePay;
float overtimeComputation;
float additional;
//process
//overtime salary
hoursWorked = int(hoursWorkedPerHour) * workDays;
monthlySalary = hoursWorked * basePayPerHour ;

//additional pay
additional = yearsWorking >= 10 ? monthlySalary * 0.1:
yearsWorking >= 5 ? monthlySalary * 0.05: 0;

//overtime pay
overtimePerHour = (hoursWorkedPerHour - int(hoursWorkedPerHour));
overtimeBasePay = basePayPerHour * overtimePerHour;
overtimeWorked = overtimePerHour * workDays;
overtime = hoursWorkedPerHour >= 8 ? overtimeWorked * overtimeBasePay: 0;


//output
cout << "Employee Name: "                         << employeeName << endl;
cout << "Number of years working here: "          << yearsWorking << endl
     << "Hour work/day: "                         <<hoursWorkedPerHour    << endl <<endl
     << "Salary: "                                << endl
     << "Hours Worked: "                          << overtimeBasePay << " hrs" << endl
     << "Over Time: "                             <<overtime << endl
     << "Additional Pay: "                        << additional << endl
     << "Monthly Salary: "                        << monthlySalary + additional + overtime << endl;



system("pause");
return 0;
}  