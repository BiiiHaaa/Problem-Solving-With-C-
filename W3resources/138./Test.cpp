#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Start , NumItem , Dif , Sum=0 , j=1; 
    cout << "Input the starting number of the G.P. series : " <<endl;
    cin>>Start;
    cout << "Input the number of items for the G.P. series : " <<endl;
    cin>>NumItem;
    cout << "Input the common ratio of G.P. series : " <<endl;
    cin>>Dif;
    cout << "The numbers for the G.P. series : " <<endl;
    for(int i=Start;j<=NumItem;i*=Dif) {
         if(i==Start) {
            cout << "[ " << i << " , ";
            Sum+=i;
            j++; 
         }else if(i==NumItem) {
            cout  << i ;
            Sum+=i;
            j++;
         }else {
            cout  << i  << " , ";
            Sum+=i;
            j++;
         }
    }
    cout << " The Sum of the G.P. series : " <<Sum;
}