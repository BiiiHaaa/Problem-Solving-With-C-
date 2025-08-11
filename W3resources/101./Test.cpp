#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string mid , cot;
    cout << "Please enter The string of middle : "<<endl;
    cin>>mid;
    cout << "Please enter a string of length of 4 : "<<endl;
    cin>>cot;
    for(int i=0;i<4;i++) {
        cout << cot[i];
        if(i==1) {
            for(int j=0;j<mid.size();j++) {
                cout <<mid[j];
            }
        }
    }
}