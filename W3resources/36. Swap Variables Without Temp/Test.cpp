/*

48. Swap Variables Without Temp

Write a C++ program that swaps two variables without using a third variable.

Sample Output:
Swap two numbers without using third variable:
---------------------------------------------------
Input 1st number : 25
Input 2nd number : 20
After swapping the 1st number is : 20
After swapping the 2nd number is : 25
*/

#include <iostream>
using namespace std;

int main() {
    int First_Num , Second_Num;
    cout << "Please enter the Firts number  : " << endl;
    cin >> First_Num; //10
    cout << "Please enter the Second number  : " << endl;
    cin >> Second_Num; //5
    First_Num  = First_Num + Second_Num; //15
    Second_Num = Second_Num - First_Num; //-10
    Second_Num = Second_Num * (-1); //10
    First_Num = First_Num  - Second_Num; //5
    cout << "After swapping the 1st number is : " << First_Num <<endl;
    cout << "After swapping the 2nd number is : " << Second_Num <<endl;
}
