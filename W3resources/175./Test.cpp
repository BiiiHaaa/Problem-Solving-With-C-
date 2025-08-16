#include <iostream>
using namespace std;
void Sumdigit (int Num) {
    int  NewNum , Sum=0  ;
    NewNum = Num;
    while(Num>0) {
        Sum+=Num%10;
        Num=Num/10;
    }
    cout << "The sum of digit of number "<<NewNum << " is : " << Sum;
}
int main() {
    int Num   ;
    cout << "Please enter a number : " << endl;
    cin >> Num;
    Sumdigit(Num);
}
