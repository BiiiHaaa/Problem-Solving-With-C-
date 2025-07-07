/*
27. Celsius to Kelvin Conversion

Write a program in C++ to convert temperature in Celsius to Kelvin.

Sample Output:
Convert temperature in Celsius to Kelvin :
---------------------------------------------------
Input the temperature in Celsius : 26.85
The temperature in Celsius : 26.85
The temperature in Kelvin : 300 
*/

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;


int main () {
    float Celsius;
    cout << "Enter The temperature in Celsius : " << endl;
    cin >> Celsius ; 
    cout << "The temperature in Celsius : " << Celsius<<  endl;
    cout << "The temperature in Kelvin : " << Celsius + 273.15<<  endl;
}