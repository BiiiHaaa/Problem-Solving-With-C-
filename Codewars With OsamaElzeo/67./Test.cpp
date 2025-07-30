#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <string>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num;
    cout << "Please enter a number : " << endl;
    cin >> Num;
    for(int i=0;i<=Num;i++) {
        cout << 2 <<"^" <<i << " = "<<pow(2,i)<<endl;
    }
}