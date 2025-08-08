#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Nums[] = { 1, 1, 1, 2, 2, 2, 1 };
    int count = 0 , i=0 ;
    int size = sizeof(Nums)/sizeof(Nums[0]);
    while(i<size) {
        if(Nums[i]==Nums[i+1]&&Nums[i]==Nums[i+2]) {
            i=i+3;
            count++;
        }else {
            i++;
        }
    }
    if(count==0) {
        cout << "False";
    }else {
        cout << "True";
    }
}