#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void palindrome (string palindrom ) {
    int size = palindrom.size();
    int check = 0;
    for(int i = 0;i<size;i++) {
        if(palindrom[i]!=palindrom[(size-1)-i]) {
            check++;
        }
        
    } 
    if(check==0) {
            cout << "The word " << palindrom << " is palindrom" << "   " <<endl;
        }else {
            cout << "The word " << palindrom << " is not palindrom" << "   "<<endl;
        }
}
int main () {
    string palindrom = "anna";
    palindrome("anna");
    palindrome("otto");
    palindrome("bob");
    palindrome("ada");
    palindrome("hello");
    palindrome("elle");
    palindrome("emme");
}