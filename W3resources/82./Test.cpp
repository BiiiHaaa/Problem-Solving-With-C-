#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int FirsNum , SecondNum;
    cout << "Please enter the first Number : " << endl;
    cin>>FirsNum;
    cout << "Please enter the second Number : " << endl;
    cin>>SecondNum;
    if(FirsNum+SecondNum>=10 && FirsNum+SecondNum<=20) {
        cout << 30;
    }else {
        cout <<FirsNum+SecondNum;
    }
}