#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word =  "TheQuickBrownFox.";
    int  CheQ=0 , Count=0  ;
    bool Isuppere = true;
    for(int i=0;i<Word.size();i++) {
        if(islower(Word[i])&&isupper(Word[i+1])) {
            cout <<Word[i] << " ";
        }else {
            cout <<Word[i] ;
        }
    }
}
