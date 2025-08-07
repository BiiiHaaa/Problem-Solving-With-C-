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
    if(FirstNum==SecondNum) {
        cout << "0";
    }else {
        if(FirstNum<100 && SecondNum<100) {
            if((100-FirstNum)<(100-SecondNum)) {
                cout << FirstNum; 
            }else {
                cout << SecondNum;
            }
        }else if(FirstNum>100 && SecondNum<100){
            if((100-SecondNum)<(FirstNum-100)) {
                cout << SecondNum;
            }else {
                cout << FirstNum;
            }
        }else if(SecondNum>100 && FirstNum<100){
            if((100-FirstNum)<(SecondNum-100)) {
                cout << FirstNum;
            }else {
                cout << SecondNum;
            }
        }else {
            if((FirstNum-100)<(SecondNum-100)) {
                cout << FirstNum;
            }else {
                cout << SecondNum;
            }
        }
    }
}