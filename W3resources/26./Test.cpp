/*
32. Check Number Sign (Positive, Negative, Zero)

Write a program in C++ to check whether a number is positive, negative or zero.

Sample Output:
Check whether a number is positive, negative or zero :
-----------------------------------------------------------
Input a number : 8
The entered number is positive.
*/

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;


int main () {
    float number_1 , number_2 ;
    cout << "Please Enter The First number : "<< endl;
    cin >> number_1 ;
    cout << "Please Enter The Second number : "<< endl;
    cin >> number_2 ;
    cout << "The quotient of " << number_1 << " and " << number_2 << " is : " << number_1/number_2 <<endl;
}