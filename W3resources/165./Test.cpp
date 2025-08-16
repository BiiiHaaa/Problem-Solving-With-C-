#include <iostream>
using namespace std;

int main() {
    int Base , Exponent , pow = 1  ;
    cout << "Please enter the Base : "<<endl;
    cin >> Base;
    cout << "Please enter the Exponent : "<<endl;
    cin >> Exponent;
    for(int i=1;i<=Exponent;i++) {
        pow*=  Base ;  
    }
    cout << Base << "^"<<Exponent << "=" <<pow;
}
