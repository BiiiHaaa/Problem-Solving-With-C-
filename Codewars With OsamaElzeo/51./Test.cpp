#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
float check(float salary , bool bonus) {
    if(bonus==true) {
        return salary * 10;
    }else {
        return salary;
    }
}
int main () {
    float salary;
    bool bonus;
    cout << "Please enter your salary : " << endl;
    cin >> salary;
    cout << "Please enter your bonus : " << endl;
    cin >> boolalpha >> bonus;
    cout << "$" << check(salary , bonus);
}