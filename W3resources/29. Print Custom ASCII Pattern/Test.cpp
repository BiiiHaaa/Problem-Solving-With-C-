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
using namespace std;

int main() {
    for(int i =0;i<27;i++) {
        if(i%2==0) {
            cout << endl;
        }else {
            for(int j=0;j<7;j++) {
                if(j==0 || j==6) {
                    cout << " xxxxx                     "<<endl;
                }else if(j==1 || j==5) {
                    cout << "x     x       x        x  "<<endl;
                }else if(j==2 ||  j==4) {
                    cout << "x             x        x  "<<endl;
                }
                else {
                    cout << "x          xxxxxxx  xxxxxxx"<<endl;
                }
            }
            break;
        }
    }
}
