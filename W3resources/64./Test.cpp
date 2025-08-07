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
    if(Word.size()==2) {
        if(Word[0]=='C' && Word[1]=='#') {
            cout << "True"; 
        }else {
            cout << "False";
        }
    }else {
        cout << "False";
    }
}