#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
bool Calc(int distance , int gallon_of_gas ,int gas_have_left) {
    if(distance<=(gallon_of_gas * gas_have_left)) {
        return true;
    }else {
        return false;
    }
}
int main () {
    int distance , gallon_of_gas , gas_have_left;
    cout << "Enter the distance between you and the gas station : "<<endl;
    cin>>distance;
    cout << "How far does your car travel on one gallon of gas? : "<<endl;
    cin>>gallon_of_gas;
    cout << "How much gas do you have left? : "<<endl;
    cin>>gas_have_left;
    if(Calc(distance , gallon_of_gas , gas_have_left)==true) {
        cout << "Your remaining gas will take you to the nearest gas station, Inchalah.";
    }else {
       cout << "Unfortunately, your remaining gas will not take you to the nearest gas station.";
    }
}