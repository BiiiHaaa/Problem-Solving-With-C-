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
    int number ;
    cout << "Please Enter a number to chek it : "<< endl;
    cin >> number ;
    if(number > 0 ) {
        cout << "The number " << number << " is Positive" << endl;
    }else if(number < 0 ) {
        cout << "The number " << number << " is Negative" << endl;
    }else {
        cout << "The number " << number << " is equal to 0" << endl;
    }
}