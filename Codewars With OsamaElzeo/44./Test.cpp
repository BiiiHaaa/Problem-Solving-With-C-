#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Nums[] = {2 , 1 , 10};
    int temp;
    for(int i=0;i<(sizeof(Nums)/sizeof(Nums[0]));i++) {
        for(int j=i+1;j<(sizeof(Nums)/sizeof(Nums[0]));j++){
            if(Nums[i]<Nums[j]) {
                temp = Nums[i];
                Nums[i] = Nums[j];
                Nums[j]=temp;
            }
        }
    }
    for(int i=0;i<(sizeof(Nums)/sizeof(Nums[0]));i++) {
        cout << Nums[i] << " ";
    }
    cout << endl;
    int sum = 0;
    for(int i=0;i<(sizeof(Nums)/sizeof(Nums[0]))-1;i++) {
        if(i==0) {
            cout << "(" << Nums[i]  << " - " << Nums[i+1]<< ")" << " + ";
            sum = sum + (Nums[i] - Nums[i+1]);
        }else {
            cout << "(" << Nums[i]  << " - "  << Nums[i+1]<< ")" << " = ";
            sum = sum + (Nums[i] - Nums[i+1]);
        }
    } 
    cout << sum << " ";
}