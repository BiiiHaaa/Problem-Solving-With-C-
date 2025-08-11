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
    for(int i=0;i<Word.size();i++) {
        if(i==Word.size()-2) {
            for(int j=0;j<3;j++) {
                cout <<Word[Word.size()-2]<<Word[Word.size()-1];
            }
        }
    }
}