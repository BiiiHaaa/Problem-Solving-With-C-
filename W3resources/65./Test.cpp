#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Firstemp , SecondTemp;
    cout << "Please enter The first Temperature : " << endl;
    cin >> Firstemp;
    cout << "Please enter The Second Temperature : " << endl;
    cin >> SecondTemp;
    if(Firstemp<0&&SecondTemp>100 || SecondTemp<0&&Firstemp>100) {
        cout << "True";
    }else {
        cout << "False";
    }
}