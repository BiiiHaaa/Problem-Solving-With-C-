#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word = "a" ;
    //cout << "Please enter a word : " << endl;
    //cin >> Word;
    if(Word.size()>=2) {
        for(int i=0;i<4;i++) {
            cout << Word[0];
            cout << Word[1];
        }
    }else {
        cout << Word;
    }
}