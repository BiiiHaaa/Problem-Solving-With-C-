#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int side_1 ,side_2 , side_3 , max;
    cout << "Please enter the First side : "<<endl;
    cin >> side_1;
    cout << "Please enter the Second side : "<<endl;
    cin >> side_2;
    cout << "Please enter the Third side : "<<endl;
    cin >> side_3;
    if(side_1>side_2&&side_1>side_3) {
        if((pow(side_1,2))==(pow(side_2,2))+(pow(side_3,2))) {
            cout<<"True"; 
        }else {
            cout<<"False";
        }
    }else if(side_2>side_1&&side_2>side_3) {
        if((pow(side_2,2))==(pow(side_1,2))+(pow(side_3,2))) {
            cout<<"True"; 
        }else {
            cout<<"False";
        }
    }else {
        if((pow(side_3,2))==(pow(side_1,2))+(pow(side_2,2))) {
            cout<<"True"; 
        }else {
            cout<<"False";
        }
    } 
}