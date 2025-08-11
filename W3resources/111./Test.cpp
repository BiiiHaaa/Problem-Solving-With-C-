#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int count = 0;
    for(int i=2;i<=500;i++) {
        for(int j=1;j<i;j++) {
            if(i%j==0) {
                count +=j;
                if(count>i) {
                    continue;
                }
            }
        }
        if(count==i) {
            cout << i << " "; 
        }
        count=0;
    }
}