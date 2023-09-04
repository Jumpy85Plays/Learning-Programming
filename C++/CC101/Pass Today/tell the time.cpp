#include<iostream>

using namespace std;

int main(){
    float timeHour;
    float timeMinute;
    cout << "Enter the time (Hour:Minute)(Use space to seperate minute and hour): ";
    cin >> timeHour >> timeMinute;
    
    if (timeHour <=0 || timeHour >24){
        cout << "Invalid time input";
        system("pause");
        return 1;
    } 

}