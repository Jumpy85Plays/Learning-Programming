//Name: Gabriel F. Aguilar
//Program No: 3
//Program Name: Calculator
//Description: A program that works as a calculaltor.
//Date: September 6, 2022

#include <iostream>

using namespace std;

int main() {
	char op;
	double num1, num2;

	cout << "Enter the operator to be used ( +, -, *, / ):";
	cin >> op;

	cout << "Enter the two numbers one by one :";
	cin >> num1 >> num2;

	switch (op) {

		case '+':
			cout << num1 << " + " << num2 << " = " << (num1 + num2);
			break;

		case '-':
			cout << num1 << " - " << num2 << " = " << (num1 - num2);
			break;

		case '*':
			cout << num1 << " * " << num2 << " = " << (num1 * num2);
			break;


		case '/':
			if (num2 != 0.00)
				cout << num1 << " / " << num2 << " = " << (num1 / num2);
			else
				cout << "Divide by Zero situation";

			break;

		default:
			cout << op << "This is not a valid operator" ;

			break;


	}
 cout<<"\n";
 system("pause");
 return 0;
	
}
