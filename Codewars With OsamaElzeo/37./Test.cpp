#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int a , b;
     cout << "Please enter the small value :" << endl;
     cin>> a;
     cout << "Please enter the Big value :" << endl;
     cin>> b;
     cout << "The numbers between "<<a <<" And "<<b<<" are : ";
     for(int i=a;i<=b;i++) {
        cout<< i <<" ";
     }
}