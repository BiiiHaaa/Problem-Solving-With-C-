#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , Count = 0;
    cout << "Please enter a number : " <<endl;
    cin>>Num;
    for(int i=1;i<=Num;i++) {
        for(int j=1;j<=i;j++) {
            Count+=j;
        }
    }
    cout << "The sum is : "<<Count;
}