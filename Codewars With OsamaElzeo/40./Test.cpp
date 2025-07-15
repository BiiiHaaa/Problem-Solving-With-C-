#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    char Word[] = {'A' , 'B' , 'C'};
    char Search;
    bool Check = false;
    cout << "Please enter The word that you seach : " << endl;
    cin>>Search;
    for(int i=0;i<sizeof(Word);i++) {
        if(Word[i]==Search) {
            Check =true;
        }
    }
    if(Check==true) {
        cout << "The Value " << Search << " Is exist in the array"<<endl;
    }else {
        cout << "The Value " << Search << " does not exist in the array"<<endl;
    }
}