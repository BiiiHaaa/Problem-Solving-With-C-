#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    for(int i=1;i<=10;i++) {
        if(i==1) {
            cout << "[ "<<i<<" , ";
        }else if(i==10) {
            cout << i << " ]";
        }else {
            cout << i << " , ";
        }
    }
}