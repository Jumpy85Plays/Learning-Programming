#include<iostream>
# include <unistd.h>
using namespace std;

int main(){
    
    int countdownLength;
    cout << " How long would you like the countdown to go for?: ";
    cin >> countdownLength;
    int countdown = 0;
    int i;
    for ( i = countdownLength; i >= countdown ; i-- )
    {
        cout << "There are " << i <<" seconds till the rocket is launched." <<endl;
        sleep(1);
        if (i == 0)
        {
            cout<< "The rocket is now launcing." <<endl;
        }
        
    }

     system("pause");
     return 0;
}