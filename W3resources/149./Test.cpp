#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num  ; 
    cout << "Please enter a number :  " <<endl;
    cin>>Num;
    int M=Num + 2;
    int l = 1;
    for(int i=0;i<Num;i++) {
      for(int k=0;k<M;k++) {
        cout << " ";
      }
      for(int j=0;j<l;j++) {
        cout << "*";
      }
      cout <<endl;
      l+=2;
      M--;  
    }

    M+=2;
    l-=4;
    for(int i=0;i<Num-1;i++) {
      for(int k=0;k<M;k++) {
        cout << " ";
      }
      for(int j=0;j<l;j++) {
        cout << "*";
      }
      cout <<endl;
      l-=2;
      M++;  
    }
}