#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word =  "1110011110011111000111111";
    int  CheQ=0 , Count=0 ;
    for(int i=0;i<Word.size();i++) {
        if(Word[i]=='1') {
            CheQ++; //2
        }else {
            if(CheQ>Count) {
                Count = CheQ;
                CheQ = 0;
            }else {
                CheQ = 0;
            }
        }
    }
    if(CheQ>Count) {
        Count = CheQ;
    }
    cout << "Longest sequence of consecutive ones of the said binary string : "<<endl;
    for(int i=0;i<Count;i++) {
        cout<< "1"; 
    }
}
