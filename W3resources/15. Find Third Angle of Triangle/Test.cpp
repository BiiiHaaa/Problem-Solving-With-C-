/*
22. Find Third Angle of Triangle

Write a C++ program to find the third angle of a triangle.

Sample Output:
Find the third angle of a triangle :
-----------------------------------------
Input the 1st angle of the triangle : 30
Input the 2nd angle of the triangle : 60
The 3rd of the triangle is : 90
*/

#include <iostream>
using namespace std;
int main () {
    float A , B;
    cout << "the 1st angle of the triangle : " << endl;
    cin >> A;
    cout << "the 2st angle of the triangle : " << endl;
    cin >> B;
    cout << "The 3rd of the triangle is : " << 180 - A - B<< endl;
}