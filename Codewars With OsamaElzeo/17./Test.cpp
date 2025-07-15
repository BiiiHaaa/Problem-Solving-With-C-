
#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word;
    char Char;
    int count = 0;
    cout << "Please enter a word : " << endl;
    cin >> Word;
    cout << "Please enter a letter : " << endl;
    cin >> Char;
    for(int i=0;i<Word.size();i++ ){
        if(Word[i]==Char) {
            count++;
        }
    }
     cout << "The letter " << Char <<" Has repeted " << count <<" time in the word " << Word <<endl;
}