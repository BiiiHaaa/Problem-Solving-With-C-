  /* vector<int> Nums = {10 , 20 , 30 , 40};
    cout << Nums.at(0)<<endl;
    cout << Nums.at(1)<<endl;
    cout << Nums.at(2)<<endl;
    cout << Nums.at(3)<<endl;
    Nums.push_back(50);
    cout << Nums.at(4)<<endl;
    Nums.pop_back(); 
    vector<int> Nums = {10 , 20 , 30 , 40};
    cout << Nums.size()<<endl;
    cout << Nums.max_size()<<endl;
    cout << Nums.capacity()<<endl;
    cout << Nums.front()<<endl;
    cout << Nums.back()<<endl;
    cout << Nums.size()<<endl;
    cout << Nums.at(Nums.size()-1)<<endl;
    Nums.clear();
    cout << Nums.empty()<<endl;*/

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
  string word , reversed_word ; 

  cout << "Please enter a word" <<endl;
  cin >> word;
  for(int i = 0 ; i<word.size();i++) {
    reversed_word[i] = word[word.size() - (i+1)]; 
  }
  cout << reversed_word <<endl;
  cout << "The word : "<< word <<" becom : "<<reversed_word <<" after the reverse string." <<endl;
}