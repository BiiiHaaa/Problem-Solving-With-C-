/*
19. Area and Circumference of Circle

Write a C++ program to find the area and circumference of a circle.

Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159 
*/
#include <iostream>
using namespace std;
int main () {
    float r; 
    cout << "The radius(1/2 of diameter) of a circle : " << endl;
    cin >> r;
    cout << "The area of the circle is : " <<  3.14 * (r * r) <<  endl;
    cout << "The circumference of the circle is :  " << 2.0 * 3.14 * r<< endl;
}