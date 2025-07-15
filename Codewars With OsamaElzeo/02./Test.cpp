#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    float num_year;
    cout << "Please enter a number of year : " << endl;
    cin >> num_year;    
    cout << "There is a : " << ceil(num_year /100) << " centry from " << num_year << " Years" <<endl;  
    if((num_year / 100) >int(num_year / 100) ) {
        cout << "There is a : " <<  int(num_year / 100) + 1 << " Centry from " << num_year << " Years" << endl; 
    }else {
        cout << "There is a : " <<  int(num_year / 100)  << " Centry from " << num_year << " Years" << endl;  
    } 
}