#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int nums[10];
    int num = 0 , count = 0;
    cout << "How Many numbers do you want to enter : "<<endl;
    cin >> num;
    for(int i=0;i<num;i++) {
        cout <<"Please enter the number "<< i+1<<" " <<endl;
        cin>>nums[i]; 
        count+=nums[i];
    }
    cout << "The Sum of : ";
    for(int i=0;i<num;i++) {
        if(i==num-1) {
            cout <<nums[i]<< "  ";    
        }else {
            cout <<nums[i]<< " + ";
        }
        
    }
    cout  << " is : "<<count  <<" and the average is : "<<count /num<<" " ;
}