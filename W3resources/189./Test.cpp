#include <iostream>
using namespace std;

int main() {
    string Word ;
    int n=0;
    cout << "Please enter a word : " << endl;
    cin >> Word;
    for(int i=0;i<Word.size();i++) {
        if((Word[i]=='1'||Word[i]=='3'||Word[i]=='5'||Word[i]=='7'||Word[i]=='9')&&(Word[i+1]=='1'||Word[i+1]=='3'||Word[i+1]=='5'||Word[i+1]=='7'||Word[i+1]=='9')){
            cout << Word[i]<<"-"; 
            continue;
        }else {
            cout << Word[i];
        }
    }
}
