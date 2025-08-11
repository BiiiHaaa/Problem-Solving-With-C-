#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num;
    cout << "Please enter a number to check it if it a prime or not : "<<endl;
    cin>>Num;
    int count = 0;
    for(int i=2;i<Num;i++) {
        if(Num%i==0) {
            count++;
            break;
        }
    }
    if(count==0) {
        cout << "The number " << Num << " is a prime number"<< endl; 
    }else {
        cout << "The number " << Num << " is not a prime number"<< endl;
    }
}