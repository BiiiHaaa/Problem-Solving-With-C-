#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word;
    cout << "Please enter a word : " <<endl;
    cin >> Word;
    for(int i =0;i<Word.size();i++) {
        if(Word[i]=='a' || Word[i]=='o' || Word[i]=='e' || Word[i]=='i' ) {
            Word[i]='!';
        }
    }
    cout << "The new word is : " << Word << " ";
}