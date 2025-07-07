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
    float a , b , c , s;
    cout << "Enter the length of a side of the triangle : " << endl;
    cin >> a ; 
    cout << "Enter the length of another side of the triangle : " << endl;
    cin >> b ; 
    cout << "Enter the angle between these sides of the triangle : " << endl;
    cin >> c ;
    s = (a + b + c)/2.0; 
    cout << "The area of the Scalene Triangle is :  " << sqrt(s * (s-a) * (s-b) * (s-c))<<  endl;
}