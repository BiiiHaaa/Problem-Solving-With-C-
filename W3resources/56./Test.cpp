#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word = "+else";
    if(Word[0]!='i'&&Word[1]!='f') {
        cout << "if " << Word  <<endl;   
    }else {
        cout << Word  <<endl;
    }
}