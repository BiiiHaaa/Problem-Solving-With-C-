#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int num  , fact = 1;
    cout << "Please enter a number : " << endl;
    cin >> num;
    for(int i=1;i<=num;i++) {
        fact*=i;
    }
    cout << "The factorial of the number ; "  <<num << " is : " << fact<<"   " ; 
}