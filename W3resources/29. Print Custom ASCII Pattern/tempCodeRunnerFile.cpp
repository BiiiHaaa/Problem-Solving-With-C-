/*

39. Print Custom ASCII Pattern

Write a C++ program to print the following pattern.

Sample Output:

 xxxxx                                                                                                        
x     x       x        x                                                                                      
x             x        x                                                                                      
x          xxxxxxx  xxxxxxx                                                                                   
x             x        x                                                                                      
x     x       x        x                                                                                      
 xxxxx  
 
*/

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
using namespace std;
int main() {
    for(int i = 0;i<13 ; i++ ) {
        if(i%2==0) {
            cout << endl;
        }else {
            for(int j=0 ; j<7;j++) {
                if(j==0 || j==6) {
                    cout << " xxxxx " <<endl;
                }else if (j==1 || j==5) {
                    cout << "x     x" <<endl;
                }else {
                    cout << "x      " <<endl;
                }
            }
            break;
        }
        for(int l =0 ;l < 2 ; l++) {
            for(int j = 0;j<13 ; j++) {
        if(j%2==0) {
            cout << "        " <<  endl;
        }else {
            for(int k =0;k<7;k++) {
                if(k==0 || k==6) {
                    cout << "        " <<  endl;
                }else if(k==1 || k==2 || k==4 || k==5 ) {
                    cout << "       x" <<  endl;
                }else {
                    cout << "    xxxxxxx" <<  endl;
                }
            }
            break;
        }   
        }
        }
        
    } 
    

}