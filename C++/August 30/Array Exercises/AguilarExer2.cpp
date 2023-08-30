#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int array[] = {4, 7, 12, 19, 31};
    int sizeOfArray = sizeof(array) / sizeof(array[0]);

    sort(array, array + sizeOfArray, greater<int>()); //sorts the array in descending order

    cout << "The Original Array is: ";
    for (int i = 0; i < sizeOfArray; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "The 3 Largest Numbers in the Array are: ";
    for (int i = 0; i < 3; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}

