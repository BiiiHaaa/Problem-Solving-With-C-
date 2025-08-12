#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Sum=0 ;
    for(int i =100;i<=200;i++) {
        if(i%9==0) {
            cout << i << " , ";
            Sum+=i; 
        }
    }
    cout <<endl <<Sum;
}