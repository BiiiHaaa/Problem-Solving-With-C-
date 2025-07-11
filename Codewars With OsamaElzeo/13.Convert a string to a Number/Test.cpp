#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Number;
    cout << "Please enter the number ; "<<endl;
    cin >> Number;
    stoi(Number);
    cout << stoi(Number);
}