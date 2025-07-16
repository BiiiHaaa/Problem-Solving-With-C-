/*

24. Kelvin to Fahrenheit Conversion

Write a program in C++ to convert temperature in Kelvin to Fahrenheit.

Sample Output:
Convert temperature in Kelvin to Fahrenheit :
---------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Fahrenheit : 80.33*/

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;


int main () {
    float Kelvin;
    cout << "Enter he temperature in Kelvin : " << endl;
    cin >> Kelvin ; 
    cout << "The temperature in Kelvin : " << Kelvin<<  endl;
    cout << "The temperature in Fahrenheit : " << Kelvin * (9.0/5.0) - 459.67<<  endl;
}