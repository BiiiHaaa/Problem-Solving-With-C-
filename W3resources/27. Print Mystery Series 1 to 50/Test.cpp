/*

37. Print Mystery Series 1 to 50

Write a C++ program to print a mystery series from 1 to 50.

Sample Output:
Print a mystery series:
-------------------------
The series are:
5 4 2 7 11 10 8 13 17 16 14 19 23 22 20 25 29 28 26 31 35 34 32 37 41 4 0 38 43 47 46 44 49 */

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
using namespace std;
int main() {
    int number  ;
    cout << "Please enter the first number " << endl;
    cin >> number ;
    while(number <49 ) {
        cout << number << " ";
        number --;
        cout << number << " ";
        number -= 2;
        cout << number << " ";
        number += 5;
        cout << number << " ";
        number += 4;
    }
}