#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void EvenOdd (int num) {
    if(num %2==0) {
        cout << "The number " << num << " is Even."<<endl;
    }else {
        cout << "The number " << num << " is Odd."<<endl;
    }
}
int main () {
    int num;
  cout << "Please enter a nummber  : " << endl;
  cin >> num;
  EvenOdd(num);
}