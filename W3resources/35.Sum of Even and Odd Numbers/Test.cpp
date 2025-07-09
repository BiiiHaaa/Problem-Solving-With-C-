/*

47. Sum of Even and Odd Numbers

Write a C++ program to calculate the sum of all even and odd numbers in an array.

Sample Output:
Original array: 1 2 3 4 5 6 7 8
Sum of all even and odd numbers: 20,16
*/

#include <iostream>
using namespace std;

int main() {
    int count , Even = 0 , Odd = 0;
    cout << "How many numbers Do you want to enter " << endl;
    cin >> count;
    int nums [count];
    for (int i =0 ; i<count ; i++) {
        cout << "Please enter the number " << i + 1 << endl;
        cin >> nums[i];
    }
    for (int i =0 ; i<count ; i++) {
        if(nums[i] %2 ==0) {
            Even +=nums[i];
        }else {
            Odd +=nums[i];
        }
    }
    cout << "The sum of the Odd numbers is : "<<Odd <<endl ; 
    cout << "The sum of the Even numbers is : "<<Even <<endl ; 
}
