#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , Count = 0  , Max  , Min    , Sum=0;
    float AVG;
    do {
        cout << "Please enter a number : " <<endl;
        cin>>Num;
        if(Num==-1) {
            continue;
        }else {
            if(Count==0){
            Max=Num;
            Min =Num;
            }
            Count++;
            Sum+=Num;
            if(Num>Max) {
                Max = Num;
            }else if(Num<Min) {
                Min =  Num;
            }
        }
    }while(Num!=-1);
    cout << "You enter : " << Count << " Number "<<endl;
    cout << Max  << " is the big Number you enter "<<endl;
    cout << Min  << " is the small Number you enter "<<endl;
    AVG=float(Sum)/float(Count);
    cout << AVG  << " is the Average of the Number you enter "<<endl;
}