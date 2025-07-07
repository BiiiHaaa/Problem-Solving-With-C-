/*
25. Kelvin to Celsius Conversion

Write a program in C++ to convert temperature in Kelvin to Celsius.
Sample Output:

Convert temperature in Kelvin to Celsius :
------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Celsius : 26.85 
*/

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;


int main () {
    float Kelvin;
    cout << "Enter The temperature in Kelvin : " << endl;
    cin >> Kelvin ; 
    cout << "The temperature in Kelvin : " << Kelvin<<  endl;
    cout << "The temperature in Celsius : " << Kelvin - 273.15<<  endl;
}