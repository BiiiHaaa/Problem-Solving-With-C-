/*
30. Total and Average of Four Numbers

Write a C++ program to compute the total and average of four numbers.

Sample Output:
Compute the total and average of four numbers :
----------------------------------------------------
Input 1st two numbers (separated by space) : 25 20
Input last two numbers (separated by space) : 15 25
The total of four numbers is : 85
The average of four numbers is : 21.25 
*/

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;


int main () {
    float Num_1 , Num_2 , Num_3 , Num_4;
    cout << "Enter 1st two numbers : " << endl;
    cin >> Num_1 >> Num_2; 
    cout << "Enter 2st two numbers : " << endl;
    cin >> Num_3 >> Num_4;
    cout << "The total of four numbers is : " << Num_1 + Num_2 + Num_3 + Num_4<<  endl;
    cout << " The average of four numbers is " << (Num_1 + Num_2 + Num_3 + Num_4) /4<<  endl;

}