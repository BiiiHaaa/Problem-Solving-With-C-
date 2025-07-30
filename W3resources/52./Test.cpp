#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int FirstNum , SecondNum;
    cout << "Please enter the first Number : " << endl;
    cin >> FirstNum;
    cout << "Please enter the Second Number : " << endl;
    cin >> SecondNum;
    if(FirstNum!=SecondNum) {
        cout << FirstNum << " + " << SecondNum << " = " << FirstNum + SecondNum <<endl;   
    }else {
        cout << FirstNum << " + " << SecondNum << " = " << (FirstNum + SecondNum) * 3 <<endl;
    }
}