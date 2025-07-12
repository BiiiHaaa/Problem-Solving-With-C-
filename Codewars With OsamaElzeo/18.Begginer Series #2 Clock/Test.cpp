
#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Hour , Minutes , Seconds , Results;
    cout << "Please enter the number of Hour : " << endl;
    cin >> Hour;
    cout << "Please enter the number of Minutes : " << endl;
    cin >> Minutes;
    cout << "Please enter the number of Seconds : " << endl;
    cin >> Seconds;
    if(Hour>=1 && Minutes>=1 && Seconds>=1) {
        Results = (Hour * 60 * 60 * 1000) + (Minutes * 60 * 1000) + (Seconds * 1000);
        cout<< "We have : " << Results << "ms in " << Hour << " Hour and " << Minutes << " Minutes and " << Seconds <<  " Seconds"<< endl; 
    }else if(Minutes>=1 && Seconds>=1) {
        Results = (Minutes * 60 * 1000) + (Seconds * 1000);
        cout<< "We have : " << Results << "ms in " <<  Minutes << " Minutes and " << Seconds <<  " Seconds"<< endl;
    }else {
        Results =  (Seconds * 1000);
        cout<< "We have : " << Results << "ms in " << Seconds <<  " Seconds"<< endl;
    }
}