#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word ;
    cout  << "Please enter a Word : "<<endl;
    getline(cin , Word);
    for(int i=0;i<Word.size();i++) {
        if(i%2==0) {
            cout << char(tolower(Word[i]));
        }else {
            cout << char(toupper(Word[i]));
        }
    }
}
