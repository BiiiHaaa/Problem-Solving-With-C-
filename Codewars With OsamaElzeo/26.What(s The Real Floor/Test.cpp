#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Floor;
    cout<< "Enter rhe number of the Floor : " << endl;
    cin >>Floor;
    if(Floor <= 0) {
        cout << Floor << " ==> " << Floor;
    }else if(Floor>0 && Floor<13) {
        cout << Floor << " ==> " << Floor-1;
    }else {
        cout << Floor << " ==> " << Floor-2;
    }
}