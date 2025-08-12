#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int FirstNum , SecondNum , Min , Max , OurGoal;
    cout << "Please enter the first number : "<<endl;
    cin >> FirstNum;
    cout << "Please enter the second number : "<<endl;
    cin >>SecondNum;
    if(FirstNum<SecondNum) {
        Min = FirstNum;
        Max = SecondNum;
    }else {
        Min = SecondNum;
        Max = FirstNum;
    }
    for(int i=1;i<Min;i++) {
        if(Min%i==0) {
            if(Max%i==0) {
                OurGoal = i;
            }
        }
    }
    cout << "The LCM of "<<FirstNum << " And " << SecondNum << " is : " << (FirstNum * SecondNum)/OurGoal;
}