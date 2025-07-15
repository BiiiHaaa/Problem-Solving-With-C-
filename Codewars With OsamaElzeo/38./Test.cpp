#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void toupper(string Word) {
    cout  << "The abreveation of the word " <<Word << " Is : " ;
    for(int i=0;i<Word.size();i++) {
        if(i==0) {
            cout <<char(toupper(int(Word[i])))<<".";
        }
        if(int(Word[i])==32) {
            cout <<char(toupper(int(Word[i+1])));
        }
    }
    cout <<endl;
}
int main () {
    toupper("Brahim Chaoufi");
    toupper("Mohamed Morsy");
    toupper("mohamed morsy");
    toupper("hazemsalah abuismail");
}