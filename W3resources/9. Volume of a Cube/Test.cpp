/*
15. Volume of a Cube

Write a C++ program that calculates the volume of a cube.

C++ libraries for game development

Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125
*/
#include <iostream>
#include <cmath> 
using namespace std;
int main () {
    float side ;
    cout << "PLease enter the side of a cube : "<<endl;
    cin>>side;
    cout <<"The volume of a cube is :"<< side * side * side <<endl;
}