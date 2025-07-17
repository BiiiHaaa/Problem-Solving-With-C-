#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int num;
    cout<< "PLease enter a number : "<< endl;
    cin >> num;
    for(int i=1;i<=num;i++) {
        if(i==1) {
            cout<< "[ " << i << " , ";
        }else if(i==num){
            cout<<  i << " ] ";
        }else {
            cout<< i << " , ";
        }
    }
}