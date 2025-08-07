#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int FirstNum , SecondNum , ThirdNum;
    cout << "Please enter The first Number : " << endl;
    cin >> FirstNum;
    cout << "Please enter The Second Number : " << endl;
    cin >> SecondNum;
    cout << "Please enter The Third Number : " << endl;
    cin >> ThirdNum;
    if(FirstNum>SecondNum && FirstNum>ThirdNum) {
        cout << FirstNum;
    }else if(SecondNum>FirstNum && SecondNum>ThirdNum) {
        cout << SecondNum;
    }else {
        cout << ThirdNum;
    }
}