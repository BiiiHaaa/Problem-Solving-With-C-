#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num = 35231;
    string Num_To_String;
    Num_To_String = to_string(Num);
    int size = Num_To_String.size();
    for(int i=(size-1);i>=0;i--) {
        if(i==(size-1)) {
            cout << "[ " << Num_To_String[i] << " , " ; 
        }else if(i==0) {
            cout  << Num_To_String[i] << " ] " ;
        }else {
            cout  << Num_To_String[i] << " , " ;
        }
    }
}