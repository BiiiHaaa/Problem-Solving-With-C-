#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int num;
    cout << "Please enter a number : " << endl;
    cin>> num;
    if(num <0) {
        cout << "The number " <<num <<" is already negative" << endl; 
    }else if(num==0) {
        cout << "The number " <<num <<" is a null value" << endl; 
    }if(num >0) {
        cout << "The Negative value of the number " <<num <<" is : " << num * (-1) << endl; 
    }
}