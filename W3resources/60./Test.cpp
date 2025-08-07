#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word = "1" ;
    //cout << "Please enter a word : " << endl;
    //cin >> Word;
    char Last_char = Word[Word.size()-1];
    cout << Last_char << Word <<Last_char;
}