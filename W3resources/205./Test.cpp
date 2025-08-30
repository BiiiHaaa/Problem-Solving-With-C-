#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word;
    cout << "Please enter a Word : " << endl;
    cin >> Word;
    bool IsUpper = false;
    bool IsLower = false;
    if(isupper(Word[0])) {
        IsUpper = true;
    }else {
        IsLower = true;
    }
    if(IsUpper) {
        for(int i=0;i<Word.size();i++) {
            if(islower(Word[i])){
                cout <<"False";
                goto Finish;
            }
        }
    }else {
        for(int i=0;i<Word.size();i++) {
            if(isupper(Word[i])){
                cout <<"False";
                goto Finish;
            }
        }
    }
    cout << "True";
    Finish:
}
