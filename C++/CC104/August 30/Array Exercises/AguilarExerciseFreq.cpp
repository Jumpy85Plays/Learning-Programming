#include <iostream>
#include <unordered_map>
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
    
    unordered_map<int, int> frequencyMap; // To store number frequencies
    for (int i = 0; i < sizeOfArray; i++) {
        frequencyMap[array[i]]++;
    }
    
    int mostFrequentNumber = array[0];
    int maxFrequency = frequencyMap[array[0]];
    
    for (int i = 1; i < sizeOfArray; i++) {
        if (frequencyMap[array[i]] > maxFrequency) {
            mostFrequentNumber = array[i];
            maxFrequency = frequencyMap[array[i]];
        }
    }
    
    cout << "The Original Array is: ";
    for (int i = 0; i < sizeOfArray; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    
    cout << "The Number That Occurred Most Frequently is: " << mostFrequentNumber << endl;

    return 0;
}
