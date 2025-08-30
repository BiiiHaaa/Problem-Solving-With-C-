#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word  = "ChatGPT Rocks";
    int  n , Count=0  ;
    //cout << "Please enter a Word : "<< endl;
    //cin >>Word;
    cout << "Please enter a Number : "<< endl;
    cin >>n;
    for(int i=0;i<Word.size();i++) {
        if(Word[i]=='a' ||Word[i]=='o' ||Word[i]=='u' ||Word[i]=='i' ||Word[i]=='e' ||
         Word[i]=='A' ||Word[i]=='O' ||Word[i]=='U' ||Word[i]=='I' ||Word[i]=='E' ){
            Count++;    
        }
    }
    cout << Count<<endl;
    if(Count>n) {
        cout << "n is less than the number of vowels present in the string"<<endl;
    }else {
        for(int i=0;i<Word.size();i++) {
            if(Word[i]=='a' ||Word[i]=='o' ||Word[i]=='u' ||Word[i]=='i' ||Word[i]=='e' ||
            Word[i]=='A' ||Word[i]=='O' ||Word[i]=='U' ||Word[i]=='I' ||Word[i]=='E' ){
                cout << " "<<Word[i]<<" ";
                Count--;    
            }
        }
        if(Count==0) {
            goto Finish;
        }
    }
    Finish:
}
