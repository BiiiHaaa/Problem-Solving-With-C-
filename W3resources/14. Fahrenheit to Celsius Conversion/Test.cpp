/*
21. Fahrenheit to Celsius Conversion

Write a C++ program to convert temperature in Fahrenheit to Celsius.

Sample Output:
Convert temperature in Fahrenheit to Celsius :
---------------------------------------------------
Input the temperature in Fahrenheit : 95
The temperature in Fahrenheit : 95
The temperature in Celsius : 35
*/

#include <iostream>
using namespace std;
int main () {
    float Fahrenheit;
    cout << "Enter The temperature in Fahrenheit : " <<endl;
    cin >> Fahrenheit;
    cout << "The temperature in Fahrenheit : " << Fahrenheit<<endl;
    cout << "The temperature in Celsius : " << (Fahrenheit - 32.0 ) * (5.0 /9.0)<<endl;
}