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
    for(int i=0;i<3;i++) {
        cout << Word[i];
    }
    for(int i=0;i<Word.size();i++) {
        cout << Word[i];
    }
    for(int i=0;i<3;i++) {
        cout << Word[i];
    }
}