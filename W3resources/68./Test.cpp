#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word;
    cout << "Please enter a Word : " << endl;
    cin >> Word;
    if(Word[1]=='y'&& Word[2]=='t') {
        for(int i=0;i<Word.size();i++) {
            if(i==1 || i==2) {
                continue;
            }
            cout << Word[i];
        }
    }else {
        cout << Word    ;
    }
}