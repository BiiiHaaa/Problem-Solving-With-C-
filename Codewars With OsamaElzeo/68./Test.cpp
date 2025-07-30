#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num;
    cout << "Please enter a positive number : "<<endl;
    cin >> Num;
    int sum = 0;
    for(int i=1;i<=Num;i++) {
        if(i==1) {
            cout << "[ " << i << " + ";
            sum+=i;
        }else if (i==Num) {
            cout  << i << " ] ";
            sum+=i;
        }else {
            cout  << i << " + ";
            sum+=i;
        }
    }
    cout << " = " << sum << "   ";
}