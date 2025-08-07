#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int FirstNum , SecondNum;
    cout << "Please enter The first Number : " << endl;
    cin >> FirstNum;
    cout << "Please enter The Second Number : " << endl;
    cin >> SecondNum;
    if(FirstNum>=100 && FirstNum<=200 && SecondNum>=100 && SecondNum<=200) {
        cout << "True";
    }else {
        cout << "False";
    }
}