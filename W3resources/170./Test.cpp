#include <iostream>
using namespace std;

int main() {
    float Num , Sum= 0 ;
    cout << "Please enter a number :  "<<endl;
    cin >> Num;
    for(float i=1;i<=Num;i++) {
        if(i==1) {
            if(i<9) {
            Sum+= i + (i+1) /10.0;
            cout << i + (i+1) /10<< " + ";
            }else {
                Sum+= i + (i+1) /100.0;
                cout << i + (i+1) /100<< " + ";
            }
        }else if(i==Num) {
            if(i<9) {
            Sum+= i + (i+1) /10.0;
            cout << i + (i+1) /10<< " = ";
            }else {
                Sum+= i + (i+1) /100.0;
                cout  << i + (i+1) /100<< " = ";
            }
        }else {
            if(i<9) {
            Sum+= i + (i+1) /10.0;
            cout << i + (i+1) /10<<  " + ";
            }else {
                Sum+= i + (i+1) /100.0;
                cout << i + (i+1) /100 << " + ";
            }
        }
    }
    cout << Sum;
}
