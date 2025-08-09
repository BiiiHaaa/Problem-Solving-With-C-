#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int NumOne , NumTwo ;
    do{
        cout << "Please enter the first number : " << endl;
        cin >> NumOne;
        cout << "Please enter the second number : " << endl;
        cin >> NumTwo;
    }while(NumOne<=10 && NumOne>=99 && NumTwo<=10 && NumTwo>=99);
    string Numone;
    Numone = to_string(NumOne);
    string Numtwo;
    Numtwo = to_string(NumTwo);
    int check =0;
    for(int i=0;i<Numone.size();i++) {
        for(int j=0;j<Numtwo.size();j++) {
            if(Numone[i]==Numtwo[j]) {
                check++;
                break;
            }
        }    
    }
    if(check==0) {
        cout << "False" << endl;
    }else {
        cout << "True" << endl;
    }
}