/*

46. Cylinder Volume

Write a C++ program to calculate the volume of a cylinder.

Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 4
Input the height of the cylinder : 8
The volume of a cylinder is : 401.92 
*/

#include <iostream>
using namespace std;

int main() {
    float radius , height ;
    cout << "Please enter the radius of the cylinder : " << endl;
    cin  >> radius;
    cout << "Please enter the height of the cylinder : " << endl;
    cin >> height;
    cout  << "The volume of a cylinder is : " <<3.14 * (radius * radius) * height;
}
