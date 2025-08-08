#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num;
    cout << "Please enter the a Number : " << endl;
    cin>>Num;
    if(Num%3==0 && Num%7==0)  {
        cout << "False";
    }else if(Num%3==0) {
        cout <<"True";
    }else if (Num%7==0) {
        cout <<"True";
    }else {
        cout << "False";
    }
}