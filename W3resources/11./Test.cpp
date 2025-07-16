/*
18. Triangle Area Using Heron's Formula

Write a C++ program to find the area of any triangle using Heron's formula.

Sample Output:
Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 5
Input the length of 3rd side of the triangle : 5
The area of the triangle is : 10.8253 
*/
#include <iostream>
#include <cmath> // Include the cmath library for the sqrt function
using namespace std;
int main () {
    float a , b , c , s , A;
    cout << "Please enter the length of 1st side of the triangle " << endl;
    cin >> a ;
    cout << "Please enter the length of 2st side of the triangle " << endl;
    cin >> b ;
    cout << "Please enter the length of 3st side of the triangle " << endl;
    cin >> c ;
    s = (a + b + c) / 2;
    A = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "The area of the triangle is :" << A << endl;
}