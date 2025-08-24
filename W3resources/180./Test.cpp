#include <iostream>
using namespace std;
int main() {
    string Word;
    char Alphabet[52] = {
    'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z',
    'A','B','C','D','E','F','G','H','I','J','K','L','M',
    'N','O','P','Q','R','S','T','U','V','W','X','Y','Z'  
    };
    cout << "Please enter a Word : "<<endl;
    cin>>Word;
    for(int i=0;i<Word.size();i++) {
        for(int j=0;j<52;j++) {
            if(Alphabet[j]==Word[i]) {
                cout << Alphabet[j+1];
                break;
            }else if(Word[i]=='1' || Word[i]=='2' || Word[i]=='3' 
                || Word[i]=='4' || Word[i]=='5' || Word[i]=='6' 
                || Word[i]=='7' || Word[i]=='8' || Word[i]=='9' 
                || Word[i]=='0'  ) {
                    cout << Word[i];
                    break;
                }
        }
    }
    
}