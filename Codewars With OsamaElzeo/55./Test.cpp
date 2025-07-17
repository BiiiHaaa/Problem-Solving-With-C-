#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int num;
    cout << "Please enter a number  : " <<endl;
    cin >> num;
    for(int i=num;i>=1;i--) {
        if(i==num) {
            cout << "[ " << i << " , " ; 
        }else if(i==1) {
            cout << i << " ]"; 
        }else {
            cout << i  << " , ";
        }
    }
}