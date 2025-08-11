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
    if(First.size()>Second.size()) {
        cout << First << Second << First;
    }else {
        cout << Second << First << Second;
    }
    
    
}