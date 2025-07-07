/*
26. Fahrenheit to Kelvin Conversion

Write a program in C++ to convert temperature in Fahrenheit to Kelvin.

Sample Output:
Convert temperature in Fahrenheit to Kelvin :
---------------------------------------------------
Input the temperature in Fahrenheit : 80.33
The temperature in Fahrenheit : 80.33
The temperature in Kelvin : 300
*/

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;


int main () {
    float Fahrenheit;
    cout << "Enter The temperature in Fahrenheit : " << endl;
    cin >> Fahrenheit ; 
    cout << "The temperature in Fahrenheit : " << Fahrenheit<<  endl;
    cout << "The temperature in Kelvin : " << (Fahrenheit + 459.67)  * (5.0/9.0)<<  endl;
}