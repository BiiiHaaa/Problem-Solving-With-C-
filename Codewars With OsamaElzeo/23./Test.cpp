#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int count = 0;
    bool check[] = {true , true , 
        false,true , true , 0 , 
        false,true , true , 0 ,
        false,true , true , 0 , 
        false,true , true , 0 ,
        false,true , true , 0 ,
        false,true , true , 0 ,
        false,true , true , 0 ,
        false, true , false,
        true , true , false,
        true , true , false }; 
     for(int i=0 ;i<sizeof(check);i++) {
        if(check[i]==true) {
            count++;
        }
    }
    cout << "The number of the sheep is : " << count;
}