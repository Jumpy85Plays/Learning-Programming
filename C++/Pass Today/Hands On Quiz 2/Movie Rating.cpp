//Name: Gabriel F. Aguilar
//Practical Quiz 2 
//Program Name: Movie Reviewer
//Description: A program that will show the users reviews on a particular movie 
//Date: September 27, 2022
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int main() {
	//initialization or decleration of elements
    bool retry = true;
	int reviewers, i, b, movieRatings; 
	char choice;
    while(retry == true){
    //get the number of reviewers
    cout << "How many reviewers? ";
    cin >> reviewers;
    //limitations
    cout<< "Movie Rating must be from 1 to 5." <<endl <<endl;
    for(i = 1; i < reviewers +  1; i++){
        //get the user reviews
        cout << "\nReviewer " << i << " rating: ";
        cin >> movieRatings;
        //to check if its in or out of bounds
        if(movieRatings >=1 && movieRatings <=5){
            cout << "1 2 3 4 5"<<endl;
            //display ratings
            for (b = 0; b < movieRatings; b++){
                cout << char(219) << ' ';
            }
        } else{
            //check for over or under statements
            cout << "The rating must be from 1 to 5.";
            i--;
        }
    }
    //asking the user if they want to try again
    cout << "\nWould you like to review the movie again? (Y/N)";
    cin >> choice;
    if (choice == 'y'||choice == 'Y'){
			retry = true;	
		} else if(choice == 'n'||choice == 'N') {
            retry = false;
		}
    } 
    while(retry == false){
        cout <<"Thank you for using this program, Have a nice day.\n";
        system("pause");
        return 0;
    }
 system("pause");
 return 0;
	
}