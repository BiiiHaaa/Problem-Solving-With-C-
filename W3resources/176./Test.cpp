#include <iostream>
using namespace std;
int main() {
    string Word   ;
    cout << "Please enter a Word : " << endl;
    cin >> Word;
    for(int i=Word.size()-1;i>=0;i--) {
        cout<<Word[i]; 
    }
}
