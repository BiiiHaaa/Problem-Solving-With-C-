#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , Sum=0 , x , fact=1 ;
    cout << "Please enter a Number : " <<endl;
    cin >>Num;
    cout << "Please enter The value of x : " <<endl;
    cin >>x;
    for(int i=1;i<=Num;i++) {
        if(i==1) {
            Sum+= 1 +x;
        }else {
            for(int j=1;j<=i;j++) {
                fact *=j; 
            }
            Sum+=(pow(x,i))/fact;
            fact=1;
        }
        
    }
    cout << "La somme de est : "<<Sum;
}