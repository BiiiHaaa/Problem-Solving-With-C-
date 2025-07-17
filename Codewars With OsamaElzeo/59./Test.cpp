#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Nums[] = {34 , -345 , -1 , 100};
    int Min = Nums[0];
    for(int i=1;i<(sizeof(Nums)/sizeof(Nums[0]));i++) {
        if(Nums[i]<Min) {
            Min = Nums[i];
        }
    }
    cout << "The minimum value of the array : " << endl;
    for(int i=0;i<(sizeof(Nums)/sizeof(Nums[0]));i++) {
        if(i==0) {
            cout << "[ " << Nums[i] << " , ";
        }else if(i==(sizeof(Nums)/sizeof(Nums[0]))-1) {
            cout  << Nums[i] << " ] ";
        }else {
            cout  << Nums[i] << " , ";
        }
    }
    cout << " is : " << Min << " " ;
}