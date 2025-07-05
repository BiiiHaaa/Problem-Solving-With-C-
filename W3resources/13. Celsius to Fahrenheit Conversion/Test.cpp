/*
20. Celsius to Fahrenheit Conversion

Write a C++ program to convert temperature in Celsius to Fahrenheit.

Sample Output:
Convert temperature in Celsius to Fahrenheit :
---------------------------------------------------
Input the temperature in Celsius : 35
The temperature in Celsius : 35
The temperature in Fahrenheit : 95
*/
#include <iostream>
using namespace std;
int main () {
    float Celsius;
    cout << "Enter The temperature in Celsius : " <<endl;
    cin >> Celsius;
    cout << "The temperature in Celsius : " << Celsius<<endl;
    cout << "The temperature in Fahrenheit : " << (Celsius * (9.0/5.0) )+ 32.0<<endl;
}