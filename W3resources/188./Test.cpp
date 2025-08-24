#include <iostream>
using namespace std;

int main() {
    string Word ;
    int count = 0 , n=0 , check = 0 ;
    char letter[100];
    char lettere;
    cout << "Please enter a word : " << endl;
    cin >> Word;
    for(int i=0;i<Word.size();i++) {
        for(int k=0;k<n;k++) {
            if(Word[i]==letter[k]) {
                continue;
            }
        }
        for(int j=0;j<Word.size();j++) {
            if(Word[i]==Word[j]) {
                count++;
            }
        }
        if(count>check) {
            check = count;
            count=0;
            lettere = Word[i];
            letter[n]=Word[i];
            n++;
        }else {
            count=0;
        }    
    }
    cout << "The letter : "<<lettere << " is the moste repeted letter and he is reaperd : " <<check << " Time"<<endl;
}
