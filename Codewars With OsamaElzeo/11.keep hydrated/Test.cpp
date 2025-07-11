#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    float Hour;
    cout << "Please enter the number of hout : " << endl;
    cin >> Hour;
    cout << "You should drink " << int(Hour * 0.5) << " Litters of water" <<endl;
}