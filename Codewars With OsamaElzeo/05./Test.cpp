#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
  string word; 
  cout << "Please enter a word" <<endl;
  cin >> word;
  cout << "The word : "<< word <<" becom : ";
  for(int i = word.size()-1 ;i>=0;i--) {
    cout << word[i] ;
  }
  cout << " after the reverse string." <<endl;
}