#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num ; 
    cout << "Please enter a number :  " <<endl;
    cin>>Num;
    int l=1;
    for(int i=0;i<Num;i++) {
      for(int j=1;j<=i+1;j++){
        cout << l << " ";
        l++;
      }
      cout <<endl;
    }
}