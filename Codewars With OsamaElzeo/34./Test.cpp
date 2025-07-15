#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string name;
    cout << "Please enter your name : " << endl;
    cin>>name;
    if(name=="Mohamed") {
        cout << "Hello Brother" <<endl;
    }else {
        cout << "Hello " <<name <<endl;
    }
}