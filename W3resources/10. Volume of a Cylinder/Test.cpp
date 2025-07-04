/*
16. Volume of a Cylinder

Write a C++ program that calculates the volume of a cylinder.

C++ libraries for game development

Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32
*/
#include <iostream>
#include <cmath> 
using namespace std;
int main () {
    const float Pi = 3.14;
    float radius  , height ;
    cout << "PLease enter the radius of a cube : "<<endl;
    cin>>radius;
    cout << "PLease enter the height of a cube : "<<endl;
    cin>>height;
    cout <<"The volume of a Cylinder is :"<< Pi * (radius * radius) * height <<endl;
}