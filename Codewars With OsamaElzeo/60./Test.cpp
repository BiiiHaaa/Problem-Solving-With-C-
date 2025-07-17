#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int sum = 0;
    int Nums[] = {1 , -4 , 7 , 12};
    cout << "La somme de : " <<endl;
    for(int i=0;i<(sizeof(Nums)/sizeof(Nums[0]));i++) {
        if(Nums[i]>0) {
            if(i==0) {
                sum+=Nums[i];
                cout << "[ " << Nums[i] << " , "; 
            }else if(i==(sizeof(Nums)/sizeof(Nums[0]))-1) {
                sum+=Nums[i];
                cout  << Nums[i] << " ] "; 
            }else {
                sum+=Nums[i];
                cout  << Nums[i] << " , "; 
            }
        }
    }
    cout << " est : " << sum << " "; 
}