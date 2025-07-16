/*
17. Area and Perimeter of Rectangle

Write a C++ program to find the Area and Perimeter of a Rectangle.

C++ libraries for game development

Sample Output:
Find the Area and Perimeter of a Rectangle :
-------------------------------------------------
Input the length of the rectangle : 10
Input the width of the rectangle : 15
The area of the rectangle is : 150
The perimeter of the rectangle is : 50 
*/
#include <iostream>
#include <cmath> 
using namespace std;
int main () {
    float  Length, Width;
    cout << "PLease enter the Length of a Rectangle : "<<endl;
    cin>>Length;
    cout << "PLease enter the Width of a Rectangle : "<<endl;
    cin>>Width;
    cout <<"The area of the rectangle is : "<< Length * Width<<endl;
    cout <<"The perimeter of the rectangle is : "<< (Length + Width) * 2<<endl;
}