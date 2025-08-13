#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , k , doublecheck , check=1 ; 
    cout << "Please enter a number :  " <<endl;
    cin>>Num;
    k = Num+2;
    for(int i=1;i<=Num;i++) {
      for(int j=1;j<=i;j++){
        if(j==1) {
          doublecheck = check;
        }
        if(check==1) {
          cout << 1;
          check=0;
        }else {
          cout << 0;
          check=1;
        }
      }
      cout <<endl;
      if(doublecheck==0) {
        check =1;
      }else{
        check =0;
      }
    }
}