#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    int Count = 0 , Begin , End;
    string Word = "The quick brown fox jumps over the lazy dog as in ";
    //cout << "Please enter a Word : " << endl;
    //cin >> Word;
    for(int i=0;i<Word.size();i++) {
        //i=9
        if(Word[i]!=' ') {
            if(Count==0) {
                Begin = i; // 4
                Count++;//1
            }else {
                Count++;//5
            }
        }else {
            End = i-1;//8
            if(Count>=3) {
                for(int j=End;j>=Begin;j--) {
                    cout <<Word[j];
                }
                Count = 0;//0
                cout << " ";
            }else {
                for(int j=Begin;j<=End;j++) {
                    cout <<Word[j];
                }
                cout << " ";
                Count=0;//0
            }
        }
    }
}
