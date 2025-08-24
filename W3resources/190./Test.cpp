#include <iostream>
using namespace std;

int main() {
    string Word ;
    int n=0;
    cout << "Please enter a word : " << endl;
    cin >> Word;
    for(int i=0;i<Word.size();i++) {
        if(islower(Word[i])){
            cout << char(toupper(Word[i]));
        }else {
            cout << char(tolower(Word[i]));
        }
    }
}
