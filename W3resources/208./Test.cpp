#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word_1 = "The quick brown fox jumps over the lazy dog" ;
    Word_1+=" ";
    int Count = 0 , Begin=0 , End , Skip=1;
    //cout  << "Please enter the first Word : "<<endl;
    //cin>> Word_1;
    //cout  << "Please enter the second Word : "<<endl;
    //cin>> Word_2;
    for(int i=0;i<Word_1.size();i++) {
        if(Word_1[i]!=' ') {
            if(Begin==0&&Skip!=1) {
                Begin = i;
            }
            Count++;
        }else {
            if(Count%2!=0) {
                End = i-1;
                for(int j=End;j>=Begin ;j--) {
                    cout << Word_1[j];
                }
                cout << " ";
                Count=0;
                Begin = 0;
                Skip++;
            }else {
                End = i-1;
                for(int j=Begin;j<=End ;j++) {
                    cout << Word_1[j];
                }
                cout << " ";
                Count=0;
                Begin = 0;
                Skip++;
            } 
        }
    }
}
