#include <iostream>
using namespace std;

int main() {
    int Num , i=0 ,  Prod = 1;
    cout << "Please enter a number : ";
    cin >> Num;
    cout << "The product of digit of "<<Num << " is : " ;
    while(Num>0) {
        Prod *= Num%10;
        Num = int(Num/10);
    }
    cout << Prod;
}
