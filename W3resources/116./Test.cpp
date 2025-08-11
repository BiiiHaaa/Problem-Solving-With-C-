#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num_1 , Num_2 , First_divid , Second_divid;
    cout << "Input the first number: "<<endl;
    cin>>Num_1;
    cout << "Input the second number: "<<endl;
    cin>>Num_2;
    for(int i=1;i<Num_1;i++) {
        if(Num_1%i==0) {
            First_divid=i;
        }
    }
    for(int i=1;i<Num_2;i++) {
        if(Num_2%i==0) {
            Second_divid=i;
        }
    }
    if(First_divid==Second_divid) {
        cout << "The Greatest Common Divisor is : "<<First_divid;  
    }else {
        cout << "The Greatest Divisor for : "<< Num_1 << " is : " <<First_divid << " And for : "<<Num_2 << " is : " <<Second_divid;
    }
}