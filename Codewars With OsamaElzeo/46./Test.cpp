#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void planet (int num) {
    switch (num)
    {
    case 1:
        cout << "Mercury" << endl; 
        break;
    case 2:
        cout << "Venus" << endl; 
        break;
    case 3:
        cout << "Earth" << endl; 
        break;
    case 4:
        cout << "Mars" << endl; 
        break;
    case 5:
        cout << "Jupiter" << endl; 
        break;
    case 6:
        cout << "Saturn" << endl; 
        break;
    case 7:
        cout << "Uranus" << endl; 
        break;
    case 8:
        cout << "Neptune" << endl; 
        break;
    default:
        break;
    }
}
int main () {
    int num;
    //cout  << "Enter a number : "<<endl;
    //cin>>num;
    planet(1);
    planet(2);
    planet(3);
    planet(4);
    planet(5);
    planet(6);
    planet(7);
    planet(8);
}