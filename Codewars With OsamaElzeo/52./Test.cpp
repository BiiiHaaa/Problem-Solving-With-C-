#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void reversenum(int number ) {
    cout << "The reverse number of " << number << " is : " << number * (-1)<<endl;
}
int main () {
    reversenum(1);
    reversenum(-1);
}