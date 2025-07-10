#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
  float Nums[5];
  bool check = false;
  for(int i = 0;i<5;i++) {
    cout << "Please enter the number "<<i+1<<endl;
    cin >> Nums[i];
  }
  for(int i = 0;i<5;i++) {
    cout << "The invert value of the value " << Nums[i] << " is : " << Nums[i] * (-1) << endl;
  }
}