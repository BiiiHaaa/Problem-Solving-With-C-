#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , Sum = 0   , j=1 ;
    cout << "Input number of terms : "<<endl;
    cin >> Num;
    cout << "The odd numbers are : "<<endl;
    for(int i=1;j<=Num;i++) {
        if(i%2==0) {
            if(j==Num) {
                j++;
                cout<<i; 
                Sum+=i;
            }else {
                j++;
                cout<<i <<" , ";
                Sum+=i;
            }
        }
    }
    cout << endl << "The Sum of odd Natural Numbers upto "<< Num << " terms : "<<Sum;
}