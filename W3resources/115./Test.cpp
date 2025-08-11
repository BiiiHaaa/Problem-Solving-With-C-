#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , check=0  ;
    cout << "Please enter a number : "<<endl;
    cin>>Num;
    for(int i=Num;i>=0;i--) {
        for(int j=2;j<i;j++) {
            if(i%j==0) {
                check++;
                break;
            }
        }
        if(check==0) {
            cout << "The last prime number befor "<<Num << " is " << i;
            break;
        }
        check=0;
    }
}