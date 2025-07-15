#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int N , X  , Y;
    cout << "Please enter a number of N : " << endl;
    cin >> N;
    cout << "Please enter a number of X : " << endl;
    cin >> X;    
    cout << "Please enter a number of Y : " << endl;
    cin >> Y;
    if(N%X==0 && N%Y==0) {
        cout << "True The number " << N << " IS divisible by " << X << " And " << Y << endl;
    }else {
        cout << "False The number " << N << " IS not divisible by " << X << " And " << Y << endl;
    }
}