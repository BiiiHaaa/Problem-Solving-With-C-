#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
using namespace std;
void Word(string Word) {
    int j ;
    for(int i = 0 ; i<size(Word); i++) {
        if(Word[i]==Word[i+1]) {
            Word[i+1] = Word[i+2];
        }
    }
    cout << Word;
}

int main () {
    Word("WWooooooooorrlllldddd");
}