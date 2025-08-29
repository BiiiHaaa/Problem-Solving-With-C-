#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word ;
    int Count =0   , StartDeJ;
    cout << "Please enter a string like [ and ] how many you want : "<<endl;
    cin>> Word;
    StartDeJ = Word.size()-1;
    if(Word.size()==2) {
        for(int i=0;i<Word.size();i++) {
            for(int j=StartDeJ;j>=0;j--) {
                if(Word[i]==Word[j]) {
                    Count+=2;
                    goto finishe;
                }   
            }
        } 
    }else {
        for(int i=0;i<Word.size();i++) {
            for(int j=StartDeJ;j>=0;j--) {
                if(Word[i]==Word[j]) {
                    if(i==j) {
                        Count++;
                        StartDeJ = j-1;
                        goto finishe;
                    }else {
                        Count+=2;
                        StartDeJ = j-1;
                        goto finish;
                    }
                }else {
                    StartDeJ = j-1;
                    goto finish;
                }
            }
        finish:   
        }
    }
    finishe:
    if(Count==0)
        cout << "Length of the longest palindrome of the said string : "<<1;
    else 
        cout << "Length of the longest palindrome of the said string : "<<Count;
}
