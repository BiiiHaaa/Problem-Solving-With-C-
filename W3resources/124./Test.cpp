#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num ;
    cout << "Input the number of terms  : "<<endl;
    cin >>Num;
    for(int i =1;i<=Num;i++) {
        cout << "Number is : " << i << " And the cube of the " << i << " is : " << pow(i,3) << endl;
    }
}