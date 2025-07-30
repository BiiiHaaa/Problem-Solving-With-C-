#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num_1 ,Num_2; 
    cout << "Please enter the first number : "<<endl;
    cin >>Num_1;
    cout << "Please enter the second number : "<<endl;
    cin >>Num_2;
    int sum = Num_1 + Num_2;
    cout << "The sum of " << Num_1 << " + " << Num_2 << " is : " << sum<<endl;
    string string_sum = to_string(sum);
    int count = 0;
    for(int i =0;i<string_sum.size();i++) {
        if(string_sum[i]=='-') {
            continue;
        }
        count++;
    }
    cout << "And the number of digit in the number : "<<sum << " is : "<<count <<endl;
}