#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int num;
    cout << "Please enter a number : " << endl;
    cin >> num;
    if(num%2==0) {
        cout << "The number " << num << " is an Even number and the result of multiplying 8 by" << num << " is : " << 8  * num << endl;
    }else {
        cout << "The number " << num << " is an Odd number and the result of multiplying 9 by" << num << " is : " << 9  * num << endl;
    }
}