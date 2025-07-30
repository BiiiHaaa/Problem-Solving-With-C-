#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int num , sum = 0;
    cout << "Please enter a number : " <<endl;
    cin >> num;
    for(int i=1;i<=num;i++) {
        sum+=i;
    }
    cout << "Add " << 1 << " To "<<num << " = " << sum;
}