#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , k ; 
    cout << "Please enter a number :  " <<endl;
    cin>>Num;
    k = Num+2;
    for(int i=1;i<=Num;i++) {
      for(int l=1;l<=k;l++) {
        cout << " ";
      }
      for(int j=1;j<=i;j++) {
        cout << "* "; 
      }
      cout <<endl;
      k--;
    }
}