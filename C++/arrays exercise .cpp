#include <iostream>
#include <string>
using namespace std;

int i;
string name[10];
string nameInput(){
string name[10];
    cout<<"Enter the Names:" <<endl;
    for (int i = 0; i<=9; i++){
        cout<<"Name"<<i+1<<": ";
        cin >> name[i]; 
        }
}
int main(){
    int retrieveThis;
    nameInput();
    cout<< "What name would you like to retrieve?: ";
    cin>> retrieveThis;
    for (i = 0; i < retrieveThis; i++)
    {
        /* code */
    }
    

system("pause");
return 0;
}