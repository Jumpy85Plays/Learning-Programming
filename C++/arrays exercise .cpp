#include<iostream>

using namespace std;

void print(int A[], int length){
    for (int n=0; n < length; n++)
        cout << A[n]<<" ";
        cout << "\n";
}

int main(){
    int arr[] = {5, 10, 15};
    print(arr, 3);
    system("pause");
    return 0;
}