#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word  ;
    bool CheQ = false;
    cout  << "Please enter a Word : "<<endl;
    cin>> Word;
    for(int i=0;i<Word.size();i++) {
        if(i==Word.size()-1) {
            break;
        }else{
            if(Word[i]==Word[i+1]) {
                CheQ = true;
            }
        }
    }
    if(CheQ){
        cout <<"True";
    }else {
        cout <<"False";
    }
}
