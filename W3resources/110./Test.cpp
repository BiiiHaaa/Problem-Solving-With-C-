#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num;
    cout << "Please enter a Number : " << endl;
    cin >> Num;
    int count = 0;
    for(int i=1;i<=Num;i++) {
        count+=i;
        if(i==1) {
            cout << "[ "<<i<<" + ";
        }else if(i==Num) {
            cout << i << " ] = ";
        }else {
            cout << i << " + ";
        }
    }
    cout << count << "   ";
}