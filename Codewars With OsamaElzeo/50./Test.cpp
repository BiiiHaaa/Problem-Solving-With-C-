#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main() {
    int Num;
    do {
        cout << "Please enter a number betwean 1 and 10 : " << endl;
        cin >>  Num; 
    }while(Num<1);
    for(int i =1;i<=10;i++) {
        cout << i << " * " << Num << " = " << i * Num << endl;
    }
}