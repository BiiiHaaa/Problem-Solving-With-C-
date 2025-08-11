#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num ;
    cout << "Input the number of characters for a side : "<<endl;
    cin >>Num;
    for(int i =0;i<Num;i++) {
        for(int j=0;j<Num;j++) {
            cout << "# ";
        }
        cout << endl;
    }
}