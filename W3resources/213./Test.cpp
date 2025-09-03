#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word_1 ,Word_2  ;
    cout  << "Please enter the first Word : "<<endl;
    getline(cin , Word_1);
    cout  << "Please enter the second Word : "<<endl;
    getline(cin , Word_2);
    for(int i=0;i<Word_2.size();i++) {
        if(islower(Word_1[i])) {
            cout << Word_2[i];
        }
    }
}
