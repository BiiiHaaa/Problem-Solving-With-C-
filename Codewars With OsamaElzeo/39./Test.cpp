#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void UpperCase (string Word) {
    for(int i =0;i<Word.size();i++) {
        Word[i]=char(toupper(int(Word[i])));
    }
    cout << Word;
}
int main () {
    string Word ;
    cout << "Please enter a word : " << endl;
    cin>>  Word;
    cout << "The UpperCase of the Word : " << Word << " Is : " ;
    UpperCase(Word);
}