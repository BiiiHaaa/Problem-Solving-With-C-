#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num_1 , Num_2;
    cout << "Please enter the first number : " << endl;
    cin>> Num_1;
    cout << "Please enter the second number : " << endl;
    cin>> Num_2;
    if(Num_1%2==0&&Num_2%2!=0 || Num_1%2!=0 && Num_2%2==0) {
        cout << "True";
    }else {
        cout << "False";
    }   
    
}