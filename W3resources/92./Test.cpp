#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int NumOne , NumTwo , NumThree;
    cout << "Please enter the first number : " << endl;
    cin >> NumOne;
    cout << "Please enter the second number : " << endl;
    cin >> NumTwo;
    cout << "Please enter the third number : " << endl;
    cin >> NumThree; 
    if((NumOne-NumTwo)==20 || (NumOne-NumThree)==20 || (NumThree-NumTwo)==20 || (NumOne-NumTwo)==-20 || (NumOne-NumThree)==-20 || (NumThree-NumTwo)==-20){
        cout << "True"; 
    }else {
        cout << "Fasle";
    }
}