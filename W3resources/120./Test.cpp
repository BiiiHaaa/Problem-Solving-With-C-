#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , Count = 0 , Number;
    cout << "Please enter a number : " <<endl;
    cin>>Num;
    Number = Num;
    while(Num>0) {
        Count+=Num%10;
        Num=int(Num/10);
    }
    cout << "The sum of the digit in the number "<< Number << " is : " << Count;
}