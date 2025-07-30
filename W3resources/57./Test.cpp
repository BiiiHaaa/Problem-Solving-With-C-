#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word ;
    int pos;
    cout << "Please enter a word : " << endl;
    cin >> Word;
    cout << "Please enter The position of charachter that you want to delete : " << endl;
    cin >> pos;
    cout << "The word "  << Word << " Will be ";
    for(int i=0;i<Word.size();i++) {
        if(i==pos) {
            continue;
        }
        cout << Word[i];
    }
    cout << " After delete the charachter number " << pos;
}