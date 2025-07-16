/*

50. Centimeters to Meters and Kilometers

Write a C++ program to enter length in centimeters and convert it into meters and kilometers.

Sample Output:
Convert centimeter into meter and kilometer :
--------------------------------------------------
Input the distance in centimeter : 250000
The distance in meter is: 2500
The distance in kilometer is: 2.5 
*/

#include <iostream>
using namespace std;

int main() {
    float dis_in_cen;
    cout << "Please enter the distance in centimeter :  " << endl;
    cin >> dis_in_cen; 
    cout << "The distance in meter is : " << dis_in_cen /100 << "m" <<endl;
    cout << "The distance in kilometer is : " << dis_in_cen /100000 << "km" <<endl;
}
