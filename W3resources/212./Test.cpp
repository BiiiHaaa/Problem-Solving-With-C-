#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word  ;
    char AlreadyCheQ[26];
    int CountofAlreadyCheQ = 0;
    char RepaterChar;
    bool CheQ = true;
    cout  << "Please enter a Word : "<<endl;
    getline(cin , Word);
    for(int i=0;i<Word.size();i++) {
        //i=0 Word[i]=F
        for(int j=0;j<CountofAlreadyCheQ;j++) {
            // j=0
            if(Word[i]==AlreadyCheQ[j]){
                CheQ = false;
                RepaterChar = Word[i];
                goto Finish;
            }
        }
        AlreadyCheQ[CountofAlreadyCheQ] = Word[i];
        CountofAlreadyCheQ++;
    }
    Finish:
    if(CheQ) {
        cout << "All character in the word : "<<Word<<" are unique";
    }else {
        cout << "The character "<<RepaterChar<< " is repeted two time so the word "<<Word<<" is not uniwue";
    }
}
