#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num;
    cout << "Please enter the a Number : " << endl;
    cin>>Num;
    if(Num%10==0 || (Num-2)%10==0 || (Num+2)%10==0 || (Num-1)%10==0 ||(Num+1)%10==0 )  {
        cout << "True";
    }else {
        cout << "False";
    }
}