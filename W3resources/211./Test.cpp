#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word  ;
    char DeleteChar;
    cout  << "Please enter a Word : "<<endl;
    getline(cin , Word);
    cout  << "Please enter a char to delete it : "<<endl;
    cin >>DeleteChar;
    for(int i=0;i<Word.size();i++) {
        if(Word[i]!=DeleteChar) {
            cout<<Word[i]; 
        }
    }
}
