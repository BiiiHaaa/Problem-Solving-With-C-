#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    float Num , Count = 0;
    cout << "Please enter a number : " <<endl;
    cin>>Num;
    for(float i=1;i<=Num;i++) {
        Count += 1/pow(i,i);
        cout << "1/"<<i<<"^"<<i<<"="<<1/pow(i,i)<<endl;; 
    }
    cout << "The sum is : "<<Count;
}