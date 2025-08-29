#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word =  "Total number of unique characters of the said two strings.";
    int  CheQ=0 , Count=0 ;
    char LowerCase[26] = {
        'a','b','c','d','e','f','g','h','i','j','k','l','m',
        'n','o','p','q','r','s','t','u','v','w','x','y','z'
    };
    for(int i=0;i<26;i++) {
        for(int j=0;j<Word.size();j++) {
            tolower(Word[j]);
            if(LowerCase[i]==Word[j]) {
                CheQ++;
            }
        }
        if(CheQ>1) {
            cout <<LowerCase[i]<<"==>"<<CheQ<<endl;
            Count+=CheQ;
            CheQ=0;
        }else {
            CheQ=0;
        }
    }
    cout << Count;
}
