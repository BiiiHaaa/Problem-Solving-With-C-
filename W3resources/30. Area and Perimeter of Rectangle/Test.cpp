/*

40. Area and Perimeter of Rectangle

Write a C++ program to print the area and perimeter of a rectangle.

Sample Output:
Print the area and perimeter of a rectangle:
----------------------------------------------
Input the width of the rectangle: 8.5
Input the height of the rectangle: 5.6
The area of the rectangle is: 47.6
The perimeter of the rectangle is: 28.2
 
*/

#include <iostream>
using namespace std;

int main() {
    float width , height;
    cout << "Enter the width of the rectangle: " << endl;
    cin  >> width;
    cout << "Enter the height of the rectangle: " << endl;
    cin  >> height;
    cout << "The area of the rectangle is :  " << height * width << endl;
    cout << "The perimeter of the rectangle is :  " << (height + width) * 2 << endl;
}
