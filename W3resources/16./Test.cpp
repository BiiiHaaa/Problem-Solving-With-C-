/*
23. Kilometers to Miles Conversion

Write a program in C++ that converts kilometers per hour to miles per hour.

Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 25
The 25 Km./hr. means 15.5343 Miles/hr.
*/
#include <iostream>
using namespace std;
int main () {
    float kilometer;
    cout << "Please enter The distance in kilometer : " << endl;
    cin >> kilometer;
    cout << "The " << kilometer << " Km./hr. means " << kilometer * 0.621371 << " Miles/hr." <<endl;
}