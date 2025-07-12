#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int nums[] = { 1 , 2 , 2};
    int sum = 0;
    cout << "La somme de : " ;
    for(int i=0;i<(sizeof(nums)/sizeof(nums[0]));i++) {
        if(i==sizeof(nums)-1) {
            cout << nums[i] << "² ";    
        }
        cout << nums[i] << "² + ";
        sum = sum +(nums[i]*nums[i]);
    }
    cout << "est : "<<sum <<" " ;
}