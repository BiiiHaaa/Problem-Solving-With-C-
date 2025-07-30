#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int n;
    cout << "How Many number do you want to enter ; "<<endl;
    cin >> n;
    int Nums[n];
    for(int i=0;i<n;i++) {
            do
        {
            cout << "Please enter a number>0 and number<101" << endl; 
            cin >> Nums[i];
        }while (Nums[i]<1 || Nums[i]>101);
    }
    
    int count=0 , counter=0 , ShowenNumber;
    for(int i=0;i<n;i++) {
        for(int j=i;j<n;j++) {
            if(Nums[j]==Nums[i]) {
                count++;
            }
        }
        if(count >counter) {
            ShowenNumber = Nums[i];
            counter  = count;
        }
        count = 0;
    }
    cout << "The mode value of the numbers : " ;
    for(int i=0;i<n;i++) {
        if(i==0) {
            cout << " " << Nums[i] << " , ";
        }else if (i==n-1) {
            cout <<  Nums[i] ;
        }else {
            cout <<  Nums[i] << " , ";
        }
    }
    cout << " is : " << ShowenNumber << "   ";
}