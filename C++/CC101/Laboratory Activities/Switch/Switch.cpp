//Name: Gabriel F. Aguilar
//Program No: 
//Program Name: Math Operations using Switches
/*Description: A program that will compute for two numbers. The operations to be performed in the two numbers are
Addition, subtraction, multiplication, division.*/ 
//Date: September 27, 2022

#include<iostream>


using namespace std;

double num1, num2;
char op;
double result;
double result2;

int main(){
    //input
    cout << "Enter first number: " ;
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Legend: " <<endl
         << "+ or A for Addition"<<endl
         << "- or S for Subtraction"<<endl
         << "* or M for Multiplication"<<endl
         << "/ or D for Division"<<endl
         << "% or U for Modulo (The remainder)"<<endl;
         cout << "Enter operator( +, -, *, /, %): ";
    cin >> op;
    //process
    switch(op){
        case '+': result = num1 + num2;
        break;
        case '-': result = num1 - num2;
        break;
        case '*': result = num1 * num2;
        break;
        case '/': if(num1 != 0 && num2 !=0 ){
        result = float(num1) / float(num2);
        result2 = num1 / num2;}
        else {
            cout << "Divide by Zero error!" <<endl;
        }
        break;
        case '%': result = int(num1) % int(num2);
        break;
        case 'A': result = num1 + num2;
        break;
        case 'S': result = num1 - num2;
        break;
        case 'M': result = num1 * num2;
        break;
        case 'D': if(num1 != 0 && num2 !=0 ){
        result = float(num1) / float(num2);
        result2 = num1 / num2;}
        else {
            cout << "Divide by Zero error!" <<endl;
        }
        break;
        case 'U': result = int(num1) % int(num2);
        break;
        default:
        cout << "Invalid Operator!" << endl;
        break;
    }
    //output    
    if (op == '+' || op == '-' || op == '*' || op == '%'){
        cout << "The result of the operation is: " << result << endl;
    } else if (op == 'A' || op == 'S' || op == 'M' || op == 'U') {
        cout << "The result of the operation is: " << result << endl;
    } else if(op == '/'){
        cout << "The result of the operation is: " <<result <<endl;
    } else if(op == 'D'){
        cout << "The result of the operation is: " <<result <<endl;
        cout << "The result of the operation without any remainder is: " <<result2 <<endl;
    }
        else{
        cout << "Math Error!" <<endl;
    }



system("pause");
return 0;
}
