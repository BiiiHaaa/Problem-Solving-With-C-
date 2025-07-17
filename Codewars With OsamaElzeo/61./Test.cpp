#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Nums[] = {1 , 2 , 15 , 15 , 17 , 11 , 12 , 17 , 17 , 14 , 13 , 15 , 6 , 11 , 8 , 7};
    int sum = 0;
    cout << "The average of : " << endl;
    for(int i=0;i<(sizeof(Nums)/sizeof(Nums[0]));i++) {
        if(i==0) {
            cout << " [ " <<Nums[i] << " , ";
            sum+=Nums[i];
        }else if(i==(sizeof(Nums)/sizeof(Nums[0]))-1) {
            cout <<Nums[i] << " ] ";
            sum+=Nums[i];
        }else {
            cout <<Nums[i] << " , ";
            sum+=Nums[i];
        }
    }
    cout << " is : " << sum / (sizeof(Nums)/sizeof(Nums[0])) << " ";
}