#include<iostream>
#include<string>
using namespace std;

int main(){

    int grade;
    string gradeSymbol;

    cout << "Enter the students grade: ";
    cin >> grade;

    if (grade >= 96 && grade <= 100)
    {
        gradeSymbol = "A+";
    } else if (grade >= 91 && grade <= 95){
        gradeSymbol = "A";
    } else if (grade >= 86  && grade <= 90){
        gradeSymbol = "B+";
    } else if (grade >= 81 && grade <= 85){
        gradeSymbol = "B";
    } else if (grade >= 75 && grade <= 80){
        gradeSymbol = "C";
    } else { gradeSymbol = "F";}
    
    cout << "The grade of the student is " << grade << " or approximately a " << gradeSymbol <<"." << endl;

    system("pause");
    return 0;
}