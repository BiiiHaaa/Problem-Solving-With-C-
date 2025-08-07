#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Number;
    cout << "Please enter a Positive Number : " << endl;
    cin >> Number;
    if(Number%3==0 || Number%7==0) {
        cout << "True"; 
    }else {
        cout << "False-";
    }
}