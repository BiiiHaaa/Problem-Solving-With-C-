#include <iostream>
using namespace std;

int main() {
    int Num  ;
    string Number;
    cout << "Please enter a number : " << endl;
    cin >> Num;
    while(Num>0) {
        Number += to_string(Num%16);
        Num= Num/16;
    }
    cout << Number<<endl;
    for(int i=Number.size()-1;i>=0;i--) {
            if(Number[i-1]=='1'&&Number[i]=='0') {
            cout<<'A';
            i-=2;
        }else if(Number[i-1]=='1'&&Number[i]=='1') {
            cout<<'B';
            i-=2;
        }else if(Number[i-1]=='1'&&Number[i]=='2') {
            cout<<'C';
            i-=2;
        }else if(Number[i-1]=='1'&&Number[i]=='3') {
            cout<<'D';
            i-=2;
        }else if(Number[i-1]=='1'&&Number[i]=='4') {
            cout<<'E';
            i-=2;
        }else if(Number[i-1]=='1'&&Number[i-1]=='5') {
            cout<<'F';
            i-=2;
        }else {
            cout<<Number[i];
        }
    } 
}
