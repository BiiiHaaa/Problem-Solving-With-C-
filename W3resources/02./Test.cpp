/*2. Sum of Two Numbers

Write a program in C++ to print the sum of two numbers.

Sample Output:
Print the sum of two numbers :
-----------------------------------
The sum of 29 and 30 is : 59*/ 

#include <iostream>
using namespace std;


int main () {
    int Num_1 , Num_2 , sum;
    cout << "Please Enter The number one : "<<endl;
    cin >> Num_1;
    cout << "Please Enter The number Two : "<<endl;
    cin >> Num_2;
    sum = Num_1 + Num_2;
    cout << "The Result of Add "<< Num_1 <<" And "<<Num_2<<" is : "<<sum<<endl;
}