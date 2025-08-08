#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int NumOne , NumTwo , NumThree;
    string Bool;
    cout << "Please enter the first number : " << endl;
    cin>>NumOne;
    cout << "Please enter the second number : " << endl;
    cin>>NumTwo;
    cout << "Please enter the third number : " << endl;
    cin>>NumThree;
    cout << "if equality is allowed write true if not write false : " << endl;
    cin >> Bool;
    if(Bool=="false") {
        if(NumOne<NumTwo && NumTwo<NumThree) {
            cout << "True    ";
        }else {
            cout << "False    ";
        }
    }else {
        if(NumOne<=NumTwo && NumTwo<=NumThree) {
            cout << "True    ";
        }else {
            cout << "False    ";
        }
    }
}