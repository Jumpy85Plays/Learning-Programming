// Name: John Luc D. Cubos, Gabriel F. Aguilar    Group Name: Jenshin Aimpact
// Machine Program # 17: A colorful Arrow
// Write a program that uses nested loops to display the arrowhead pattern with the following colors
//      *            red
//      ***          green
//      *****        yellow
//*************      blue
//      *****        yellow
//      ***          green
//      *            red
#include<iostream>
#include<windows.h>
using namespace std;

int main(){
    // declaration
    int i, j;
    const int count = 7;
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    // process
    for (i = 0; i < 1; i++) {
        for(j = 0; j < count; j++) {
            switch (j) {
            case 0:
            case 6:
                SetConsoleTextAttribute(screen, 4);
                cout <<"      *\n";
                break;
            case 1:
            case 5:
                SetConsoleTextAttribute(screen, 2);
                cout <<"      ***\n";
                break;
            case 2:
            case 4:
                SetConsoleTextAttribute(screen, 6);
                cout <<"      *****\n";
                break;
            case 3:
                SetConsoleTextAttribute(screen, 1);
                cout <<"*************\n";
                break;
            }
        }
    }
    cout << endl;
    SetConsoleTextAttribute(screen, 7);
    system("pause");
    return 0;
}