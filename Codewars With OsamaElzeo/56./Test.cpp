#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
bool check (bool woork , bool vacanse) {
    if(woork==true && vacanse==false) {
        return true;
    }else {
        return false;
    }
}
int main () {
    bool woork , vacanse;
    cout << "if you are working enter true if not enter false"<<endl;
    cin >> boolalpha >> woork;
    cout << "if you are at vacanse enter true if not enter false"<<endl;
    cin >> boolalpha >> vacanse;
    if(check(woork , vacanse)==1) {
        cout  << "True" << endl;
    }else {
        cout  << "Fasle" << endl;
    }
}