#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word;
    cout << "Please enter a Word : "<<endl;
    cin>>Word;
    if(Word.size()>2) {
         for(int i=2;i<Word.size();i++) {
        cout <<Word[i];
        if(i==Word.size()-1) {
            cout << Word[0] << Word[1]; 
        }
    }
    }else {
        cout <<Word;
    }
}