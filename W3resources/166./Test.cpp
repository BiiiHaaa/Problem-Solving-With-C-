#include <iostream>
using namespace std;

int main() {
    int Num ;
    cout << "Please enter the a number : "<<endl;
    cin >> Num;
    cout << "The factore of "<<Num << " are : ";
    for(int i=1;i<=Num;i++) {
        if(Num%i==0) {
            cout << i << " ";
        }  
    }
}
