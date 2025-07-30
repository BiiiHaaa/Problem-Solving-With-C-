#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    float n , s;
    cout << "Please enter the number of sides of the polygon : " <<endl;
    cin >> n;
    cout << "Please enter the length of each side of the polygon:  "<<endl;
    cin >> s;
    cout << "The area of the polygon is : " << (n*pow(s,2)) /(4.0* tan(3.14/n))<<"   "; 
}