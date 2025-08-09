#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int NumOne , NumTwo ;
    cout << "Please enter the first number : " << endl;
    cin >> NumOne;
    cout << "Please enter the second number : " << endl;
    cin >> NumTwo;
    int sum = NumOne + NumTwo;
    string Numone;
    string Numtwo;
    string Sum;
    Numone = to_string(NumOne);
    Numtwo = to_string(NumTwo);
    Sum = to_string(sum);
    if(Sum.size()==Numone.size()) {
        cout << Sum; 
    }else {
        cout << Numone;
    }
}