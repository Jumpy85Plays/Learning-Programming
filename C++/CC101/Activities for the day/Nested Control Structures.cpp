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
    // initialize variables in declarations
    int passes = 0,           // number of passes
        failures = 0,         // number of failures
        studentCounter = 1,   // student counter
        result;               // one exam result
    
    // process 10 students; counter-controlled loop
    while ( studentCounter <= 10 ) {
        cout << "Enter result (1=pass,2=fail): ";
        cin >> result;

        if ( result == 1 )        // if/else nested in while
            passes = passes + 1;
        else
            failures = failures + 1;

        studentCounter = studentCounter + 1;
    }
    // termination phase
    cout << "Passed " << passes << endl;
    cout << "Failed " << failures << endl;
    if ( passes > 8 )
        cout << "Raise tuition " << endl;



system("pause");
return 0;
}
