#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num ;
    cout << "Input the number upto : "<<endl;
    cin >>Num;
    cout << "Multiplication table from 1 to 5 : "<<endl;
    for(int i =1;i<=10;i++) {
        for(int j =1;j<=Num;j++) {
            if(j==Num) {
                cout << i << " x " << j << " = " << i*j;
            }else {
                cout << i << " x " << j << " = " << i*j<< " , ";
            }
        }
        cout <<endl;
    }
}