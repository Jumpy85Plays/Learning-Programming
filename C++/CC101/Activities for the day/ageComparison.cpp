//Create a program that will input ages of a person.
//It will accept input until your input 0
//Arrange the inputted ages from highest to lowest
// Date: 09/10/2022
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<algorithm>
using std::sort;
using std::greater;

int main(){
    // initialization
    int age[]{};
    int position = 1;
    int eachUser = 1;
    // NOTE: sentinel value is 0
    do{ if(age[position] == 0) break; // guard clause
        position++;                   // increment
        cout << "Age: ";              // get user input
        cin >> age[position];
    } while (true);

    // sort ages from greatest to least
    sort(age, age + position, greater<int>());
    // display sorted array
    cout << "Age: ";
    // display age in each element
    for(eachUser = 0; eachUser < position; eachUser++) {
        cout << age[eachUser + 1];
        // add a coma to separate numbers
        if(eachUser == position - 1) break;
        cout << ',' << ' ';
    }
    cout << endl;
    system("pause");
    return 0;
}