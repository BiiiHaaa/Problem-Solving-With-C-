#include <iostream>
using namespace std;
int main() {
    string Word = "cpp string exercises";
    //cout << "Please enter a Word : "<<endl;
    //+cin>>Word;
    for(int i=0;i<Word.size();i++) {
        if(i==0) {
            cout << char(toupper(Word[i]));
        }else if(Word[i]== ' ') {
            cout << " ";
            cout << char(toupper(Word[i+1]));
            i=i+1;
        }else {
            cout <<Word[i];
        }
    }
}