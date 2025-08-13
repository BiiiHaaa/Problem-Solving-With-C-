#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Num; 
    cout << "Please enter a number : " <<endl;
    cin>>Num;
    cout <<"The reverse number of " <<Num << " is : " ;
    int size = Num.size()-1;
    for(int i=size;i>=0;i--) {
        cout<<Num[i]; 
    }
}