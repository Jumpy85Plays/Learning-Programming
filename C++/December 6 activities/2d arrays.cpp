#include<iostream>

using namespace std;

void print (int A[][3], int N, int M){
    int R, C;
    for (R = 0; R < N; R++)
        for (C = 0; C < M; C++)
            cout << A[R][C];
}

int main(){
    int arr[4][3] = {{12, 29, 11},
                     {25, 25, 13},
                     {24, 64, 67},
                     {11, 18, 14,}};
    print(arr, 4, 3);
    system("pause");
    return 0;
}