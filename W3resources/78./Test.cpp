#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    //int Nums[] = {1,1,2,3,1};
    //int Nums[] = {1,1,2,4,1};
    int Nums[] = {1,1,2,1,2,3};
    int Count = 0 ;
    int Count_of_Number_1 = 0;
    int Count_of_Number_2 = 0;
    int Count_of_Number_3 = 0;
    int size =  sizeof(Nums)/sizeof(Nums[0]);
    for(int i=0;i<size;i++) {
        if(Nums[i]==1) {
            if(Count_of_Number_1==0) {
                Count++;
                Count_of_Number_1++;
            }
        }else if(Nums[i]==2) {
            if(Count_of_Number_2==0) {
                Count++;
                Count_of_Number_2++;
            }
        }else if(Nums[i]==3) {
            if(Count_of_Number_3==0) {
                Count++;
                Count_of_Number_3++;
            }
        } 
    }
    if(Count==3) {
        cout <<"Ture";
    }else {
        cout <<"False";
    }
}