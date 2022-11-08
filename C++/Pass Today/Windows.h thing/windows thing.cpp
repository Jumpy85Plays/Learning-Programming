//Name: Gabriel F. Aguilar
//Lab Activity 
//Program Name: Color change
//Description:The goal of this activity is to make a program that will make the name you input different colors.
//Date: September 27, 2022

#include<iostream>
#include<windows.h>
#include<string.h>
#include<sstream>
using namespace std;


  int main(){
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
    int color = 4, a;
    string yourName;

    cout << "Enter your name: ";
    getline(cin, yourName);
    a = yourName.length();
    for(int i=0; i<=a;i++){
        SetConsoleTextAttribute(screen, color);
        cout<<yourName[i];
        color--;
        if (color == 3) color--;
        if (color == 0) color = 4;
      Sleep(10);
    }
        

    SetConsoleTextAttribute(screen, 7);
    cout<<"\n";
    system("pause");
    return 0; 
}