#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word  ;
    char SearchChar;
    int Count = 0;
    cout  << "Please enter a Word : "<<endl;
    getline(cin , Word);
    cout  << "Please enter a char : "<<endl;
    cin >>SearchChar;
    for(int i=0;i<Word.size();i++) {
        if(Word[i]==SearchChar) {
            Count++;
        }
    }
    cout <<"The charechter "<< SearchChar << " is appear "<< Count<< " time in the word :  "<<Word;
}
