#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int NumOne , NumTwo ;
    cout << "Please enter the first number : " << endl;
    cin >> NumOne;
    cout << "Please enter the second number : " << endl;
    cin >> NumTwo; 
    if(NumOne==NumTwo){
        cout << 0; 
    }else if((NumOne%7)==(NumTwo%7)) {
        if(NumOne>NumTwo) {
            cout << NumTwo;
        }else {
            cout << NumOne;
        }
    }else {
        if(NumOne>NumTwo) {
            cout << NumOne;
        }else {
            cout << NumTwo;
        }
    }
}