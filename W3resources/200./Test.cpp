#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word =  "THE Quick Brown Fox";
    int  CheQ=0 , Count=0  ;
    bool Isuppere = true;
    for(int i=0;i<Word.size();i++) {
        if(!isupper(Word[0])) {
            Isuppere = false;
            break;
        }else if(Word[i]==' ') {
            if(!isupper(Word[i+1])) {
                Isuppere = false;
                break;
            }
        }else if(i!=0&&Word[i-1]!=' ') {
            if(isupper(Word[i])) {
                Isuppere = false;
                break;
            }
        }
    }
    if(Isuppere) {
        cout <<"True";
    }else {
        cout <<"False";
    }
}
