#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void Mangoes(int bay , int free) {
    if(bay<=2) {
        cout << "Sorry there is no mangoes for free" << endl;
    }else {
        cout << "Sinece you bay : " << bay <<" mangoes The total amount is : " << (bay-(bay/free)) * 3 <<"$ And You have " << bay/free << " mangoes for free" << endl;
    }
}
int main () {
  int mangoes;
  cout << "Please enter how many mangoes do you bay : " << endl;
  cin >> mangoes;
  Mangoes(mangoes , 3);
}