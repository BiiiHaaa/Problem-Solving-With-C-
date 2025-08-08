#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word;
    cout << "Please enter the a Word : " << endl;
    cin>>Word;
    for(int i=0;i<Word.size();i++) {
        if(Word[0]=='F' && Word[Word.size()-1]=='B') {
            cout << "FizzBuzz";
            break;
        }else if (Word[0]=='F') {
            cout << "Fizz";
            break;
        }else if (Word[Word.size()-1]=='B') {
            cout << "Buzz";
            break;
        }else {
            cout << Word;
            break;
        }
    }
}