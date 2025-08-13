#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , k=0 , check=0;
    int Number[1000] ; 
    cout << "Please enter a number :  " <<endl;
    cin>>Num;
    for(int i=2;i<Num;i++) {
      for(int j=2;j<i;j++) {
            if(i%j==0) {
            check = 1;
            break;
         }
      }
      if(check==0) {
         Number[k]=i;
         k++;
      }
      check=0;
    }
    for(int i=0;i<k;i++) {
      cout <<Number[i] << " , ";
    }
    cout << endl;
    for(int i =0;i<k;i++) {
      for(int j =i+1;j<k-1;j++) {
         if(Number[i]+Number[j]==Num) {
            cout << Number[i] << " + " << Number[j] << " = " << Num <<endl; 
         }
      }
    }
}