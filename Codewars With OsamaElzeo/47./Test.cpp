#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void sheep (int Num) {
    if(Num==0) {
        cout << "\"\""<<endl;
    }else {
        for(int i=0;i<Num;i++) {
        cout << i+1 <<" sheep...";
     }
     cout <<endl;
    }
}
int main() {
    int Num;
    do {
        cout << "Please enter a number : " << endl;
        cin >> Num;
    }while(Num<0);
    sheep(Num);
    do {
        cout << "Please enter a number : " << endl;
        cin >> Num;
    }while(Num<0);
    sheep(Num);
    do {
        cout << "Please enter a number : " << endl;
        cin >> Num;
    }while(Num<0);
    sheep(Num);
    do {
        cout << "Please enter a number : " << endl;
        cin >> Num;
    }while(Num<0);
    sheep(Num);
    do {
        cout << "Please enter a number : " << endl;
        cin >> Num;
    }while(Num<0);
    sheep(Num);
    do {
        cout << "Please enter a number : " << endl;
        cin >> Num;
    }while(Num<0);
    sheep(Num);
    do {
        cout << "Please enter a number : " << endl;
        cin >> Num;
    }while(Num<0);
    sheep(Num);
}