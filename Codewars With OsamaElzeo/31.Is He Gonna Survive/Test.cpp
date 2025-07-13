#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int bulletes , dragons;
    cout << "How many bulletes Do you have : "<<endl;
     cin >>bulletes;
     cout << "How many dragons tehre are in the castle : "<<endl;
     cin >>dragons;
     if(dragons * 2 <=bulletes) {
        cout << "You can Go to fight."; 
     }else {
        cout << "Stay in your home";
     }
}