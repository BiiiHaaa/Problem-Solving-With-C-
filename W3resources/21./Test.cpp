/*
29. Quotient and Remainder Calculation

Write a C++ program to compute the quotient and remainder.

Sample Output:
Compute quotient and remainder :
-------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1 
*/

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;


int main () {
    float dividend , divisor , quotient;
    cout << "Enter The dividend :" << endl;
    cin >> dividend ; 
    cout << "Enter the divisor" << endl;
    cin >> divisor ;  
    quotient  = int(dividend /divisor);
    cout << "The quotient of the division is : " << int(dividend /divisor)<<  endl;
    cout << "The remainder of the division is : " << dividend  - (quotient * divisor )<<  endl;

}