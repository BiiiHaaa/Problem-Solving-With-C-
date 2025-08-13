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
    int l=1;
    k = Num+2;
    for(int i=1;i<=Num;i++) {
      for(int n=1;n<=k;n++) {
        cout << " "; 
      }
      for(int j=1;j<=l;j++){
        cout << '*';
      }
      cout <<endl;
      k--;
      l+=2;
    }
}