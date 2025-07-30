#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Num;
    cout << "Please enter a number : " <<endl;
    cin >> Num;
    int size = Num.size();
    char First_Num = Num[0];
    char Last_Num = Num[size-1];
    cout << "After swaping the first and last number the number : " << Num << " Will be : ";
    for(int i=0;i<size;i++) {
        if(i==0) {
            cout << Last_Num;
        }else if(i==(size-1)) {
            cout << First_Num;
        }else {
            cout << Num[i];
        }
    }
}