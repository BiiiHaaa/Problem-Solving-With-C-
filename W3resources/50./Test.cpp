#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word = "Hello MYyy FriendO How Are You Today";
    for(int i =0;i<Word.size();i++) {
        if(int(Word[i])>=65 && int(Word[i])<=90) {
            if(isupper(int(Word[i]))!=0) {
                Word[i] = tolower(Word[i]);
            }
        }
    }
    cout << Word;
}