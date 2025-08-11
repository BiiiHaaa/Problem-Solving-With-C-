#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string First , Second;
    cout << "Please enter The first string : "<<endl;
    cin>>First;
    cout << "Please enter The second string : "<<endl;
    cin>>Second;
    for(int i=1;i<First.size();i++) {
        cout <<First[i];
    }
    for(int i=1;i<Second.size();i++) {
        cout <<Second[i];
    }
}