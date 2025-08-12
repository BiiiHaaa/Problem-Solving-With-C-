#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , Sum=0 , init = 1;
    cout << "Please enter a Number : " <<endl;
    cin >>Num;
    cout << "La somme de : " ;
    for(float i=1;i<=Num;i++) {
        if(i==Num) {
            init = (init * 10) + 1;
            cout << init ;
            Sum+=init ;
        }else if(i==1) {
            cout << init<< " , ";
            Sum+=init ;
        }else {
            init = (init * 10) + 1;
            cout << init<< " , ";
            Sum+=init ;
        } 
    }
    cout << " est : "<<Sum;
}