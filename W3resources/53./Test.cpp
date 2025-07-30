#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num ;
    do {
        cout << "Please enter a Number : " << endl;
        cin >> Num;
    }while(Num<0);
    if(Num<=51) {
        cout << "The difference between " << Num << " And 51 is : "  << 51 - Num <<endl;   
    }else {
        cout << "The difference between " << Num << " And 51 is : "  <<  (Num - 51) * 3 <<endl;
    }
}