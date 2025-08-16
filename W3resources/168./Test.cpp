#include <iostream>
using namespace std;

int main() {
    string Num ;
    cout << "Input a 8 bit binary value : "<<endl;
    cin >> Num;
    cout << "The original binary = "<<Num <<endl;
    for(int i=0;i<Num.size();i++) {
        if(Num[i]=='0') {
            Num[i]='1';
        }else {
            Num[i]='0';
        }  
    }
    cout << "After ones complement the number = "<<Num;
}
