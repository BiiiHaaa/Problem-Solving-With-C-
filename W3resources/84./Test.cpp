#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num;
    cout << "Please enter the first Number : " << endl;
    cin>>Num;
    if(Num%13==0 || (Num-1)%13==0) {
        cout << "True";
    }else {
        cout <<"False";
    }
}