/*
14. Volume of a Sphere

Write a C++ program that calculates the volume of a sphere.

C++ libraries for game development

Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32
*/
#include <iostream>
#include <cmath> 
using namespace std;
int main () {
    const float Pi = 3.14;
    float sph ;
    cout << "PLease enter the radius of a sphere : "<<endl;
    cin>>sph;
    cout <<"The volume of a sphere is :"<< ((4.0/3) * Pi * (sph  * sph * sph)) <<endl;
}