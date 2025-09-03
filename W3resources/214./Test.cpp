#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word ,Sub  ;
    int Count=0 , Pos;
    cout  << "Please enter a Word : "<<endl;
    getline(cin , Word);
    cout  << "Please enter the Sub : "<<endl;
    getline(cin ,Sub);
    for(int i=0;i<Word.size();i++) {
        if(Word[i]==Sub[0]&&Word[i+1]==Sub[1]) {
            Count++;
            Pos = i;
        }
        if(Count==2) {
            break;
        }
    }
    if(Count==2) {
        cout <<Pos;
    }else {
        cout <<-1;
    }
}
