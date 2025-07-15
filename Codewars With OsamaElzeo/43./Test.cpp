#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void calc(int pos ,int back) {
    cout <<(back*2)+pos<<endl;
}
int main () {
    int pos , back;
    cout  << "What is the current position : "<<endl;
    cin >> pos;
    cout  << "What is the number of the back : "<<endl;
    cin >> back;
    calc(pos,back);
    cout  << "What is the current position : "<<endl;
    cin >> pos;
    cout  << "What is the number of the back : "<<endl;
    cin >> back;
    calc(pos,back);
    cout  << "What is the current position : "<<endl;
    cin >> pos;
    cout  << "What is the number of the back : "<<endl;
    cin >> back;
    calc(pos,back);
}