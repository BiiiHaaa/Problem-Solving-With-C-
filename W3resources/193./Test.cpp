#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word;
    int Count =0 , n=1;
    cout << "Please enter a string like [ and ] how many you want : "<<endl;
    cin>> Word;
    for(int i=0;i<Word.size();i++) {
        if(Word[i]=='['&&Word[Word.size()-n]==']') {
            Count+=2;
            n++;
        }
    }
    cout << "Length of longest parentheses : "<<Count;
}
