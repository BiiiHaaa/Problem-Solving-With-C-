#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word;
    int Count =0  , startdeJ ;
    char Temp;
    cout << "Please enter a string like [ and ] how many you want : "<<endl;
    cin>> Word;
    startdeJ = Word.size()-1;
    for(int i=0;i<Word.size();i++) {
        if(Word[i]=='a' ||Word[i]=='o' ||Word[i]=='u' ||Word[i]=='e' ||
            Word[i]=='i' || Word[i]=='A' ||Word[i]=='O' ||Word[i]=='U' ||Word[i]=='E' ||
            Word[i]=='I' ) {
                for(int j=startdeJ;j>=0;j--) {
                    if(Word[j]=='a' ||Word[j]=='o' ||Word[j]=='u' ||Word[j]=='e' ||
                        Word[j]=='i' || Word[j]=='A' ||Word[j]=='O' ||Word[j]=='U' ||Word[j]=='E' ||
                        Word[j]=='I') {
                            Temp = Word[i];
                            Word[i] = Word[j];
                            Word[j]=Temp;
                            startdeJ =  j-1;
                            break;
                        }
                        
                }
                
            }
            if(i==startdeJ) {
                goto finish;
             
        }
    }
    finish:
    cout << "After reversing the vowels of the said string : "<<Word;
}
