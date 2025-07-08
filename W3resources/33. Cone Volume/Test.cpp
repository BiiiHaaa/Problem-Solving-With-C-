/*

45. Cone Volume

Write a C++ program to calculate the volume of a cone.

Sample Input: 5 3
Sample Output:
Input Cone's radius: Input Cone's height: The volume of the cone is: 78.5397
 
*/

#include <iostream>
using namespace std;

int main() {
    float radius , height;
    cout << "Please enter the radius of the Cone ; " <<endl;
    cin >> radius;
    cout << "Please enter the height of the Cone ; " <<endl;
    cin >> height;
    cout << "The volume of the cone is :  " << (1.0/3.0)* 3.14 * (radius * radius) * height<<endl;
}
