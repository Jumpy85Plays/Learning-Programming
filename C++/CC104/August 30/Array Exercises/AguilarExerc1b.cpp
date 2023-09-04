#include <iostream>
using namespace std;

int main() {
    int maxSize = 10; // Maximum size of the array
    int array[maxSize]; // Declare an array
    int sizeOfArray = maxSize;
    cout << "Enter the number of elements inside the array (up to " << maxSize << "): ";
    cin >> sizeOfArray;
    
    cout << "Enter " << sizeOfArray << " numbers: ";
    for (int i = 0; i < sizeOfArray; i++) {
        cin >> array[i];
    }
    
    int largestNumber = array[0];
    for (int i = 1; i < sizeOfArray; i++) {
        if (array[i] > largestNumber) {
            largestNumber = array[i];
        }
    }
    
    cout << "The Original Array is: ";
    for (int i = 0; i < sizeOfArray; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    cout << "The Largest Number in the Array is: " << largestNumber << endl;

    system("pause");
    return 0;
}
