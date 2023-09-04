#include <iostream>
using namespace std;

int main() {
    int array[] = {4, 7, 12, 19, 31};
    int sizeOfArray = sizeof(array) / sizeof(array[0]);
    
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

    system("PAUSE");
    return 0;
}
