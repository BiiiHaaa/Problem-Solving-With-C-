#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main() {
    int Nums_1[] = {10 , 20 , 30 , 40 , 50};
    int Nums_2[] = {10 , 20 , 30 , 40 , 50};
    int sum= 0;
    cout << "La somme de : " ;
    for(int i=0;i<(sizeof(Nums_1)/sizeof(Nums_1[0]));i++){
        if(i==(sizeof(Nums_1)/sizeof(Nums_1[0]))-1) {
            cout << "(" << Nums_1[i] << " + " << Nums_2[i] << ")" << " = " ;
            sum += Nums_1[i]  + Nums_2[i]; 
        }else {
            cout << "(" << Nums_1[i] << " + " << Nums_2[i] << ") + " ;
            sum += Nums_1[i]  + Nums_2[i]; 
        }
    }
    cout << sum << " ";
}