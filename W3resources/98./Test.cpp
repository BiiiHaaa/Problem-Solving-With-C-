#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int NumOne , NumTwo , NumThree ;
    cout << "Please enter the first number : " << endl;
    cin >> NumOne;
    cout << "Please enter the second number : " << endl;
    cin >> NumTwo;
    if(NumOne<=13 && NumTwo<=13) {
        if((13-NumOne)<(13-NumTwo)) {
            cout << NumOne;
        }else {
            cout <<NumTwo;
        } 
    }else {
        cout << 0;
    }
}