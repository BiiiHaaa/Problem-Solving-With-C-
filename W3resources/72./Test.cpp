#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int FirstNum , SecondNum;
    int Count=0;
    cout << "Please enter The first Number : "<<endl;
    cin>>FirstNum;
    cout << "Please enter The second Number : "<<endl;
    cin>>SecondNum;
    if(FirstNum>SecondNum) {
        if((FirstNum-SecondNum)%2==0) {
            cout << "True";
        }else {
            cout << "False";
        }
    }else if(SecondNum>FirstNum) {
        if((SecondNum-FirstNum)%2==0) {
            cout << "True";
        }else {
            cout << "False";
        }
    }else {
        cout << "True";
    }
}