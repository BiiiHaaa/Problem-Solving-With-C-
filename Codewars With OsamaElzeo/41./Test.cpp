#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int num;
    cout << "Please enter a number betwean 1 and 9 ; "<<endl;  
    cin>>num;
    switch (num)
    {
    case 1:
        cout << "One"; 
        break;
    case 2:
        cout << "Two"; 
        break;
    case 3:
        cout << "Three"; 
        break;
    case 4:
        cout << "Fout"; 
        break;
    case 5:
        cout << "Five"; 
        break;
    case 6:
        cout << "Six"; 
        break;
    case 7:
        cout << "Seven"; 
        break;
    case 8:
        cout << "eight"; 
        break;
    case 9:
        cout << "Nine"; 
        break;
    default:
    cout << "Please enter a number betwean 1 and 9 ";
        break;
    }
}