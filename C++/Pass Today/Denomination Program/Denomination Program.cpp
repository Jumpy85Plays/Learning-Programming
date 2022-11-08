//Name: Gabriel F. Aguilar
//Program No: 7
//Program Name: Denominator
//Description: A program that will determine the denomination of the money you input
//Date: September 13, 2022

#include<iostream>

using namespace std;

int main()
{
    float x;
    cout<<"Input Amount: " ;
    cin >> x;

    int billValue = int(x); //Get the whole number

    float centValue = x - float(billValue); //to get the decimals
    int centPercent = centValue * 100;//to convert decimal to whole numba

    cout<<"You have ₱" << x << endl;
    cout<<"Denomination\t" << "Pieces" <<endl
        //Bills
        <<"Number of 1000 Peso bills: "<< billValue/1000
        <<"\nNumber of 500 Peso bills: "  << (billValue %= 1000)/500
        <<"\nNumber of 200 Peso bills: "  << (billValue %= 500)/200
        <<"\nNumber of 100 Peso bills: "  << (billValue %= 200)/100
        <<"\nNumber of 50 Peso bills:  "  << (billValue %= 100)/50
        <<"\nNumber of 20 Peso bills:  "  << (billValue %= 50)/20
        <<"\nNumber of 10 Peso coins:  "  << (billValue %= 20)/10
        <<"\nNumber of 5 Peso coins:   "  << (billValue %= 10)/5
        <<"\nNumber of 1 Peso coins:   "  << (billValue %= 5)/1
        //Cents
        <<"\nNumber of 50 Centavo coins: " << (centPercent / 50)
        <<"\nNumber of 20 Centavo coins: " << (centPercent %=50)/20
        <<"\nNumber of 10 Centavo coins: " << (centPercent %=20)/10
        <<"\nNumber of 5 Centavo coins:  " << (centPercent %=10)/5
        <<"\nNumber of 1 Centavo coins:  " << (centPercent %=5)/1 <<endl;
        
 
 system("pause");
 return 0;

}