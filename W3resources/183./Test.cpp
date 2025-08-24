#include <iostream>
using namespace std;
int main() {
    string Word ;
    char alphabet[26] = {
    'a','b','c','d','e','f','g','h','i','j','k','l','m',
    'n','o','p','q','r','s','t','u','v','w','x','y','z'
    };
    cout << "Please enter a Word : "<<endl;
    cin>>Word;
    for(int i=0;i<26;i++) {
        for(int j=0;j<Word.size();j++) {
            if(Word[j]==alphabet[i]) {
                cout << alphabet[i];
            }
        }    
    }
}
