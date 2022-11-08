//Name: Gabriel F. Aguilar
//Program No: 6
//Program Name: Product Price
/*Description: A program that will determine the price of an item if its cheap or expensive basing on:
If the price is 100 up it will dislay "Expensive" otherwise it will display "Cheap" */
//Date: September 13, 2022

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{ 
    float price;
    string productName;
    int numberOfPieces;
    
    cout << "Enter the Product Name: ";
    getline(cin, productName);
    cout << "Enter the number of pieces: ";
    cin >> numberOfPieces;
    cout << "Enter the price of the product here: ";
    cin >> price;
    
    string result;    
    result = price * numberOfPieces >= 100 ? "Expensive" : "Cheap" ;
    cout << "Price: P " << price * numberOfPieces << endl
         << "Remark: " << result <<endl;
system("pause");
return 0;
}