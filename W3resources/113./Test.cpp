#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Start , End ; 
    int count = 0 ; 
    int check = 0;
    cout << "Input number for starting range: "<<endl;
    cin>>Start;
    cout << "Input number for ending range: "<<endl;
    cin>>End;
    cout << "The prime numbers between "<< Start << " and "<< End << " are : " << endl;
    for(int i=Start;i<=End;i++) {
        if(i==1) {
            continue;
        }
        for(int j=2;j<i;j++) {
            if(i%j==0) {
                check++;
                break;;
            }
        }
        if(check==0) {
            cout << i << " ";
            count++;
        }
        check=0;
    }
    cout << endl << "The total number of prime numbers between "<< Start <<" to "<< End << " is : "<<count;
}