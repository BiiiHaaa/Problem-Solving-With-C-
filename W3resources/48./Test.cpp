#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Nums[7];
    for(int i=0;i<7;i++) {
        cout << "Please enter the number  " << i+1 << " : "<<endl;
        cin >> Nums[i];
    }
    int temp;
    for(int i=0;i<7;i++) {
        for(int j=i+1;j<7;j++) {
            if(Nums[i]<Nums[j]) {
                temp = Nums[i];
                Nums[i] = Nums[j];
                Nums[j] = temp;
            }
        }
    }
    for(int i=0;i<7;i++) {
        cout << i+1 << "==>" << Nums[i]<<endl;
    }
}