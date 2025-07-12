#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    //string Word = "hello world";
    //string Word = "HELLO WORLD";
    string Word = "HeLlO wOrLd";
    cout << "The senteces :" << Word << " will be like this : ";
    for(int i = 0; i<Word.size() ;i++) {
        if(int(Word[i])>=65 && int(Word[i])<=90) {
            Word[i]=tolower(Word[i]);
        } else {
            Word[i]=toupper(Word[i]);
        }
    }
    cout <<  Word << " after the alternating."<< endl;
}