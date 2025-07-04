/*
6. Check Primitive Value Limits

Write a C++ program that checks whether primitive values cross the limit.

C++ libraries for game development

Check whether the primitive values crossing the limits or not :
--------------------------------------------------------------------
The Gender is : F
Is she married? : 1
Number of sons she has : 2
Year of her appointment : 2009
Salary for a year : 1500000
Height is : 79.48
GPA is 4.69
Salary drawn upto : 12047235
Balance till : 995324987
*/
#include <iostream>
using namespace std; 

int main() {
    int num;
    cout << "Please enter The number : " << endl;
    cin >> num;
    cout << " The number is : " <<num<< endl;
    num++;
    cout << "After post increment by 1 the number is : " <<num<< endl;
    cout << "After pre increment by 1 the number is :  " << ++num << endl;
    num+=1;
    cout << "After increasing by 1 the number is : "<< num <<  endl;
    num--;
    cout << "After post decrement by 1 the number is : " << num<< endl;
    cout << "After pre decrement by 1 the number is : " <<--num<< endl;
    num-=1;
    cout << "After decreasing by 1 the number is : " << num << endl;
    return 0;
}
