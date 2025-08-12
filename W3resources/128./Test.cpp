#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    float Num , Sum=0;
    cout << "Please enter a Number : " <<endl;
    cin >>Num;
    cout << "La somme de : " ;
    for(float i=1;i<=Num;i++) {
        if(i==Num) {
            cout << "1/"<<i;
            Sum+=1/i;
        }else {
            cout << "1/"<<i<<" + ";
            Sum+=1/i;
        } 
    }
    cout << " est : "<<Sum;
}