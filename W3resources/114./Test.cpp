#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , Fact =1;
    cout << "Please enter a number : "<<endl;
    cin>>Num;
    for(int i=1;i<=Num;i++) {
        Fact*=i;
    }
    cout << "The factorial of : "<< Num<< " is : "<< Fact;
}