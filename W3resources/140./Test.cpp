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
    for(int i=0;i<Num;i++) {
      for(int j=0;j<=i;j++) {
         cout << "*";
      }
      cout <<endl;
    }
}