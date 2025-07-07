/*
31. Rectangular Pattern of Single Digit

Write a C++ program to input a single-digit number and print it in a rectangular form of 4 columns and 6 rows.

Sample Output:
Make a rectangular shape by a single digit number :
--------------------------------------------------------
Input the number : 5
5555
5 5
5 5
5 5
5 5
5555 
*/

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
using namespace std;


int main () {
    int number;
    cout << "Please enter e number" << endl;
    cin >> number;
    for(int i =0 ; i<6 ; i++) {
        if(i==0 || i==5) {
            for(int j=0 ; j<4;j++) {
                cout << number;
            }
            cout << endl;
        }else {
                for(int k = 0  ; k<3 ;k++) {
                    if(k == 0 || k==2){
                        cout << number;
                    }else {
                        cout << " ";
                    }
                }
                cout << endl;
            }
    }
}