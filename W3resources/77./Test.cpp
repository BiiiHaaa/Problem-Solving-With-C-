#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word;
    int Count = 0 ;
    cout << "Please enter a Word : "<<endl;
    cin>>Word;
    for(int i=0;i<Word.size();i+=2) {
        cout << Word[i]; 
    }
    
}