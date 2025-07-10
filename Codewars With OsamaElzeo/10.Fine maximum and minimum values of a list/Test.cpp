#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void min (int nums[]) {
    int min = nums[0];
    for(int i=0;i< 0;i++) {
        if(nums[i+1]<min) {
            min = nums[i+1];
        }
    }
    cout << "The minimum Number of the list of number do you enter is : " << min <<endl;
}
void max (int nums[]) {
    int max ;
    max = nums[0];
    for(int i=0;i< 0;i++) {
        if(max < nums[i+1]) {
            max = nums[i+1];
        }
    }
    cout << "The maximum Number of the list of number do you enter is : " << max <<endl;
}
int main () {
    //int nums[10] = {4 , 6 , 2 , 1 , 9 , 63 , -134 , 566} ;
    //int nums[10] = {-52 , 56 , 30 , 29 , -54 , 0 , -110} ;
    //int nums[10] = {42 , 54 , 65 , 87 , 0} ;
    int nums[] = {5} ;
    min(nums);
    max(nums);
}