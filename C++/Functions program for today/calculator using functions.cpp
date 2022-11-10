
#include<iostream>
using namespace std;

bool retryFunction();
void additionFunction(int, int);
void subtractionFunction(int, int);
void multiplicationFunction(int, int);
void divisionFunction(int, int);
void moduloFunction(int, int);
int main(){
    bool retry = true;
    int num1, num2;
    char op;
    while(retry == true){
        cout << "Enter the first number: ";
		cin >> num1;
		cout << "Enter the operator to be used ( +, -, *, /, %):";
		cin >> op;
        cout << "Enter the second number: ";
		cin >> num2;
        switch (op)
        {
        case '+':
            additionFunction(num1, num2);
            break;
        case '-':
            subtractionFunction(num1, num2);
            break;
        case '*':
            multiplicationFunction(num1, num2);
            break;
        case '/':
            divisionFunction(num1, num2);
            break;
        case '%':
            moduloFunction(num1, num2);
            break;
        default:
            cout << op << "This is not a valid operator" ;
            break;
        }
        retry = retryFunction();
    }
 system("pause");
 return 0;
}

bool retryFunction() {
    char choice;
    cout << "\nWould you like to try again? (1/Y = Yes, 2/N = No): ";
		cin >> choice;
		if (choice == '1'||choice == 'y' || choice == 'Y'){
            system("cls");
            return true;	
		} else if (choice == '2'||choice == 'n' || choice == 'N'){
			return false;
		}
        return NULL;
}
void additionFunction(int num1, int num2){
    cout << num1 << " + " << num2 << " = " << (num1 + num2);
}
void subtractionFunction(int num1,int num2){
    cout << num1 << " - " << num2 << " = " << (num1 - num2);
}
void multiplicationFunction(int num1,int num2){
    cout << num1 << " * " << num2 << " = " << (num1 * num2);
}
void divisionFunction(int num1,int num2){
    if (num2 != 0.00)
			cout << float(num1) << " / " << float(num2) << " = " << float(num1) / float(num2);
		else
			cout << "Divide by Zero situation";
}
void moduloFunction(int num1,int num2){
    cout << num1 << " % " << num2 << " = " << (num1 % num2);
}