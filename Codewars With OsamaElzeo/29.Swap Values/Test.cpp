#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int nums[1];
    int swap;
    cout  << "Please enter the First number : " << endl;
    cin >> nums[0];
    cout  << "Please enter the Second number : " << endl;
    cin >> nums[1];
    swap = nums[0];
    nums[0] = nums[1];
    nums[1] = swap;
    cout  << "The First number will be : " << nums[0] << endl;
    cout  << "The Second number will be : " << nums[1] << endl;
}