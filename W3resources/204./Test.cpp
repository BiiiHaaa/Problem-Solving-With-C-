#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word;
    char characters[26] = {
    'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z'
    };
    bool False = true;
    char MisssingLetter;
    int Begin;
    cout << "Please enter a Word : " << endl;
    cin >> Word;
    for(int i=0;i<26;i++) {
        if(Word[0]==characters[i]) {
            Begin = i;
            break;
        }
    }
    for(int i=0;i<Word.size();i++) {
        if(Word[i]!=characters[Begin]) {
            False = false;
            MisssingLetter = characters[Begin];
            break;
        }else {
            Begin++;
        }
    }
    if(False) {
        cout << "There is no missing letter."<<endl;
    }else {
        cout << MisssingLetter << " is the missing letter."<<endl;
    }
}
