/*

51. Kilometers to Miles Conversion

Write a C++ program that converts kilometers per hour to miles per hour.

Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 5
The 5 Km./hr. means 3.10686 Miles/hr. 
*/

#include <iostream>
using namespace std;

int main() {
    float dis_in_kilom;
    cout << "Please enter the distance in kilometer :  " << endl;
    cin >> dis_in_kilom; 
    cout << "The " << dis_in_kilom <<" Km./hr. means " << dis_in_kilom * 0.621371 << " Miles/hr."  <<endl;
}
