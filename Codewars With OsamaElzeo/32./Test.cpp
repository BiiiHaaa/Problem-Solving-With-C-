#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Wrong_Sentence = "Salam0 H0w are y0u t0day 1s everyth1n G00d";
    cout << "The correct sentence of : "<<Wrong_Sentence <<" is : " ;
    for(int i=0;i<Wrong_Sentence.size();i++) {
        if(Wrong_Sentence[i]=='0') {
            Wrong_Sentence[i] = 'o';
        }else if(Wrong_Sentence[i]=='5') {
            Wrong_Sentence[i] = 's';
        }else if(Wrong_Sentence[i]=='1') {
            Wrong_Sentence[i] = 'i';
        }
    }
    cout << Wrong_Sentence <<" ";
}