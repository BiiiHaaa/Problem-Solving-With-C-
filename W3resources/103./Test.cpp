#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word;
    cout << "Please enter a Word : "<<endl;
    cin>>Word;
    if(Word.size()<=2) {
        cout <<Word;
    }else {
        for(int i=0;i<2;i++) {
            cout <<Word[i];
        }
    }
}