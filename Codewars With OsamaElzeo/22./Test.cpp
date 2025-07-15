#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void Calc(int Num_One  , int Num_Two , char Op) {
    if(Op=='+') {
        cout << Num_One << " + " << Num_Two << " = " << Num_One + Num_Two;
    }else if(Op=='-') {
        cout << Num_One << " - " << Num_Two << " = " << Num_One - Num_Two;
    }else if(Op=='x') {
        cout << Num_One << " x " << Num_Two << " = " << Num_One * Num_Two;
    }else  {
        cout << Num_One << " / " << Num_Two << " = " << Num_One / Num_Two;
    }
}
int main () {
    int Num_One , Num_Two;
    char Op;
    cout <<"Please enter the First number : "<<endl;
    cin >> Num_One;
    cout <<"Please enter + or x or - or / : "<<endl;
    cin >> Op;
    cout <<"Please enter the Second number : "<<endl;
    cin >> Num_Two;
    Calc(Num_One , Num_Two , Op);
}