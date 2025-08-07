#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word;
    int Count=0;
    cout << "Please enter a Word : "<<endl;
    cin>>Word;
    for(int i=0;i<Word.size();i++) {
        if(Word[i]=='z'|| Word[i]=='Z') {
            Count++;
        }
    }
    if(Count>=2&&Count<=4) {
        cout << "True";
    }else {
        cout << "False";
    }
}