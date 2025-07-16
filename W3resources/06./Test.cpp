/*
Write a C++ program that swaps two numbers.

C++ libraries for game development

Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25
*/
#include <iostream>
using namespace std; 

int main() {
    int num1 , num2 , swap;
    cout << "Please Enter the First number ; "<<endl;
    cin>>num1;
    cout << "Please Enter the Second number ; "<<endl;
    cin>>num2;
    swap = num1;
    num1 = num2;
    num2 = swap;
    cout << "After swapping the 1st number is : "<< num1<<endl;
    cout << "After swapping the 2st number is : "<< num2<<endl;
    return 0;
}
