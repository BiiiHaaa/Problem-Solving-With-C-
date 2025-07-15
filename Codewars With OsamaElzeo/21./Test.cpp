#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
bool Uppercase (string Sentence) {
    for(int i=0;i<Sentence.size();i++){
        if(islower(Sentence[i])){
            return false;
        }
    }
    return true;
}
int main () {
  //string Sentence = "Hello My friend How are you today";
  string Sentence = "HELLO MY FRIEND HOW ARE YOU TODAY";
  if(Uppercase(Sentence)==true) {
    cout << "The Sentence " << Sentence << " Is uppercase" << endl;
  }else {
    cout << "The Sentence " << Sentence << " Is not uppercase" << endl;
  }
}