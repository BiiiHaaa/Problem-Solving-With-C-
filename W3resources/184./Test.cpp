#include<iostream>
using namespace std; 
int main() {
    string Word;
    int check = 0;
    cout << "Please enter a word : "<<endl;
    cin >> Word;
    for(int i=0;i<Word.size();i++) {
        if(Word[i]=='e') {
            if(Word[i+3]=='g') {
                check++;
                break;
            }
        }else if(Word[i]=='g') {
            if(Word[i+3]=='e') {
                check++;
                break;
            }
        }
    }
    if(check==0) {
        cout << "False";
    }else {
        cout << "True";
    }
}