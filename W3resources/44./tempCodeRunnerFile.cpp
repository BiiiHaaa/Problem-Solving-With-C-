#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num[] = {10 , 200 , -222 , 55 , 75 , 777 , 220};
    int size  = sizeof(Num)/sizeof(Num[0]);
    int max;
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            if(Num[i]>Num[j]) {
                max = Num[i];
                Num[i] = Num[j];
                Num[j] = max;
            }
        }
    }
    for(int i=0;i<3;i++) {
        if(i==0) {
            cout << "[ " << Num[i] << " , ";
        }else if(i==(2)) {
            cout << Num[i] << " ] ";
        }else {
            cout << Num[i] << " , ";
        }
    }
}