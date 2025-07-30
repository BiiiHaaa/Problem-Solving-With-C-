#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    float side;
    cout << "Please enter the side of the hexagon : " <<endl;
    cin>> side;
    cout << "The area of the hexagon is : "<< ((3*sqrt(3))/2)*(pow(side,2));
}