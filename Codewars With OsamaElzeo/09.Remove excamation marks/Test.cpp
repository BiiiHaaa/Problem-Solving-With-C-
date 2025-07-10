#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Exmarks = "H!!ell!!!o Br!!!p a!!!re!!! You!!!! good!!! today!!!!!???" ;
    //cout << "Please enter the text with excamation marks : " << endl;
    //cin >> Exmarks;
    cout << "The Sentence " << Exmarks << " Without Expclamation marks will be : " ;
    for(int i = 0;i<Exmarks.size();i++) {
        if(int(Exmarks[i])==33) {
            continue;
        }
        cout<<Exmarks[i]; 
    }  
}