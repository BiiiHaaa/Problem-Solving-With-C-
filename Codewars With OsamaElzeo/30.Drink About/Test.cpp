#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int age;
    cout << "Please enter Your age : "<< endl;
    cin>>age;
    if(age<14) {
        cout << "You can drink Toddy";
    }else if(age>=14 && age<18) {
        cout << "You can drink Coke";
    }else if(age>=18 && age<21) {
        cout << "You can drink (in the exo they write beer don't drink it haram Bro)";
    }else {
        cout << "You can drink (in the exo they write Wiskey don't drink it haram Bro)";
    }
}