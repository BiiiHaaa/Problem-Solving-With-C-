#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int FirstNum , SecondNum ;
    cout << "Please enter The first Number : " << endl;
    cin >> FirstNum;
    cout << "Please enter The second Number : " << endl;
    cin >> SecondNum;
    if((FirstNum==30)|| (SecondNum==30) || (FirstNum + SecondNum==30)) {
        cout << "True"  <<endl;   
    }else {
        cout << "False"  <<endl;
    }
}