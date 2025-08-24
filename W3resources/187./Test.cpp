#include <iostream>
using namespace std;

int main() {
    string Word  , Check;
    cout << "Please enter a word : " << endl;
    cin >> Word;
    for(int i=Word.size()-1;i>=0;i--) {
        Check+=Word[i];
    }
    if(Word==Check) {
        cout << "True";
    }else {
        cout << "False";
    }
}
