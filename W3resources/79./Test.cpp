#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word;
    int count = 0 , i =0;
    cout << "Please enter a Word : " << endl;
    cin >> Word;
    while(i<Word.size()) {
        if(count<2) {
            cout <<Word[i];
            i++;
            count++;
        }else if(count==2) {
            i = i+2;
            count=0;
        }
    }
}