#include<iostream>
using namespace std;

void printNumberIfEven(int num){
    if (num % 2 == 1){
        cout << "odd number" <<endl;
        return;
    }
    cout << "even number; number is " <<num << endl;
}
    int main(){
        int x = 4;
        printNumberIfEven(x);
        //even number ; number is 3 
        int y = 5;
        printNumberIfEven(y);
        //oddnumber
    
    system("pause");
    return 0;
    }
