#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Word;
    int Number ;
    cout << "Please enter a Word : "<<endl;
    cin>>Word;
    cout << "Please enter How many time you need to repeat the word  "<< Word << " : " <<endl;
    cin>>Number;
    for(int i=0;i<Number;i++) {
        cout << i+1 <<"==>" << Word <<endl;
    }
}