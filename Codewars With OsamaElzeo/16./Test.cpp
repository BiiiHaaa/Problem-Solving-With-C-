  /* vector<int> Nums = {10 , 20 , 30 , 40};
    cout << Nums.at(0)<<endl;
    cout << Nums.at(1)<<endl;
    cout << Nums.at(2)<<endl;
    cout << Nums.at(3)<<endl;
    Nums.push_back(50);
    cout << Nums.at(4)<<endl;
    Nums.pop_back(); 
    cout << endl <<"========" << endl; 
    vector<int> Nums = {10 , 20 , 30 , 40};
    cout << Nums.size()<<endl;
    cout << Nums.max_size()<<endl;
    cout << Nums.capacity()<<endl;
    cout << Nums.front()<<endl;
    cout << Nums.back()<<endl;
    cout << Nums.size()<<endl;
    cout << Nums.at(Nums.size()-1)<<endl;
    Nums.clear();
    cout << Nums.empty()<<endl;
    cout << endl <<"========" << endl; 
    vector<int> Nums = {10 , 20 , 30 , 40};
   vector<int>::iterator it = Nums.begin();
   auto itr = Nums.begin() + 1;
   cout << "First element is : " << *it << endl;
   cout << "Second element is : " << *itr << endl;
   Nums.erase(Nums.begin());
   cout << "First element after delete is : " << *it << endl;
   cout << "Second element after delete is : " << *it << endl;
   cout << endl <<"========" << endl; 
   vector<int> Nums = {10 , 20 , 30 , 40};  
    vector<int>::iterator Firsrt = Nums.begin();
    vector<int>::iterator Last = Nums.end()-1;
    cout << "The First element is : " << *Firsrt << endl;
    cout << "The Second element is : " << Firsrt[1] << endl;
    cout << "The Third element is : " << Firsrt[2] << endl;
    cout << "The Last element is : " << *Last << endl;
    cout << "The befer Last element is : " << *Last - 1 << endl;
    cout << "The Last element is : " << *(Last - 1) << endl;
    advance(Firsrt , 3);
    cout << "The First element is : " << *Firsrt << endl;
    advance(Firsrt , -2);
    cout << "The First element is : " << *Firsrt << endl;
    */

#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    //string Word = "W   O  r  l   d";
    string Word = "B  i i i H     a a a ";
    cout << "The word " <<Word<< " Without String will be look like : " ;
    for(int i = 0;i<Word.size();i++) {
        if(int(Word[i])==32) {
            continue;
        }
        cout << Word[i]; 
    }   
}