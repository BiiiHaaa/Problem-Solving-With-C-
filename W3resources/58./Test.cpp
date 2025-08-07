#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word ;
    cout << "Please enter a word : " << endl;
    cin >> Word;
    for(int i=0;i<Word.size();i++) {
        if(i==0) {
            cout << Word[Word.size()-1];
        }else if (i==Word.size()-1) {
            cout << Word[0];
        }else {
            cout << Word[i];
        }
    }
}