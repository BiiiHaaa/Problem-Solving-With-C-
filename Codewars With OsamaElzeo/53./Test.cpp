#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int firstnum , secondnum , sum = 0;
    int nums[] = {};
    cout << "Enter the First number : "<<endl;
    cin >>firstnum;
    cout << "Enter the Second number : "<<endl;
    cin >>secondnum;

    for(int i=firstnum;i<=(secondnum*firstnum);i+=firstnum) {
        if(i==(firstnum*secondnum)) {
            sum += firstnum;
            cout << sum << " ] " ;
        }else if(i==firstnum) {
            sum += firstnum;
            cout << "[ " << sum << " , "  ;
        }else {
            sum += firstnum;
            cout   << sum << " , "  ;
        }
    }
}