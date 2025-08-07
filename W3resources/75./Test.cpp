#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word;
    int Count = 0 ;
    cout << "Please enter a Word : "<<endl;
    cin>>Word;
    for(int i=0;i<Word.size();i++) {
        if(Word[i]=='a' && Word[i+1]=='a') {
            Count++;
        }
    }
    cout << "The string aa is repeated " << Count << " Time in the string " << Word;
}