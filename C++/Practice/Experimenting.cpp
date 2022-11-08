//Create a program that will avergrade the test scores of students. 
//It will ask the user for the number of students and the number of test scores per student
// Date: 09/10/2022
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main(){
    bool retry = true;
    int numberOfStudents = 0,
        studentScore = 0, 
        totalScore = 0,
        numberOfTestScores = 0;
    char choice;
    while (retry == true){//thing to do when loop
        //get the number of students
        cout << "Enter the number of students: ";
        cin >> numberOfStudents;
        cout << "Enter the number of test scores: ";
        cin >> numberOfTestScores;
        for (int i = 1; i <= numberOfStudents; i++)
        {
            for (int b = 1; b <= numberOfTestScores; b++)
            {
                cout<<"Enter score " <<b <<" of student " <<i <<":";
                cin >> studentScore;
                totalScore += studentScore;
            }
            cout<< "The average for student number " << i <<" is " <<  float(totalScore) / numberOfTestScores << " \n";
            totalScore = 0;
        }
    //asking the user if they want to try again
    cout << "\nWould you like to use the program again? (Y/N)";
    cin >> choice;
    if (choice == 'y'||choice == 'Y'){
			retry = true;	
		} else if(choice == 'n'||choice == 'N') {
            retry = false;
		}
        system("CLS");
    } 
    while(retry == false){
        cout <<"Thank you for using this program, Have a nice day.\n";
        system("pause");
        return 0;
    }

}