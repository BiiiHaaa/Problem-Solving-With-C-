#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int num  , count =0;
    cout << "Please enter a number : " << endl;
    cin >> num;
    cout<< "The Odd number below " <<num << " are : " ;
    for(int i=1 ;i<num;i = i+2 ) {
        cout << i << " ";
        count++;
    }
    cout << " So we have " << count << " Odd number bekow " << num;
}