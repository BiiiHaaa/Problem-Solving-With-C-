#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num;
    cout << "Please enter a number : " <<endl;
    cin>>Num;
    for(int i=3;i<=Num;i++) {
        for(int j=2;j<i;j++) {
            if(i%j==0) {
                cout << i << " ";
                break;
            }
        }
    }
}