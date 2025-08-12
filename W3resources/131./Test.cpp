#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , Sum=0 , x , i=1 , j=1 ;
    cout << "Please enter a Number : " <<endl;
    cin >>Num;
    cout << "Please enter The value of x : " <<endl;
    cin >>x;
    while(i<=Num) {
        if(i%2!=0) {
            Sum+= pow(x,j);
            i++;
            j+=2;
        }else {
            Sum-= pow(x,j);
            i++;
            j+=2;
        }
    }        
    cout << "La somme est : "<<Sum;
}