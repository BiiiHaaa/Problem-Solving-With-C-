#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Nums[] = { 5, 6, 2, 9};
    int count = 0 ;
    int size = sizeof(Nums)/sizeof(Nums[0]);
    for(int i =0;i<size;i++) {
        if(Nums[i]==5 && Nums[i+1]==5 || Nums[i]==5 && Nums[i+1]==6){
            count++;
        }
    }
    cout << count; 
}