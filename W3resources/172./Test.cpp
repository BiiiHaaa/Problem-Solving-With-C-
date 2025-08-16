#include <iostream>
using namespace std;

int main() {
    int Num  ;
    string Number;
    cout << "Please enter a number : " << endl;
    cin >> Num;
    while(Num>0) {
        Number += to_string(Num%2);
        if(Num%2==0) {
            Num = Num/2;
        }else {
            Num = (Num-1)/2;
        }
    }
    for(int i=Number.size()-1;i>=0;i--) {
        cout << Number[i];
    } 
}
