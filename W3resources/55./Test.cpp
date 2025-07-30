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
    if(Num>=90 && Num<=110  ) {
        cout << Num << " is within 10 of 100"  <<endl;   
    }else if (Num>=190 && Num<=210) {
        cout << Num << " is within 10 of 200"  <<endl;
    }else {
        cout << "False"  <<endl;
    }
}