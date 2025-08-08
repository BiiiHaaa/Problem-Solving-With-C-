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
    cin>>FirstNum;
    cout << "Please enter the second Number : " << endl;
    cin>>SecondNum;
    if(FirstNum==5 || SecondNum==5 || FirstNum+SecondNum==5 || FirstNum-SecondNum==5) {
        cout << "True";
    }else {
        cout <<"False";
    }
}