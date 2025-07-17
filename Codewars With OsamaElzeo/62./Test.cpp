#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Str_Num;
    cout << "Please enter a number  : " <<endl;
    cin >>Str_Num;
    for(int i=0;i<Str_Num.size();i++) { 
        if(Str_Num[i]=='0' || Str_Num[i]=='1' || Str_Num[i]=='2' || Str_Num[i]=='3' || Str_Num[i]=='4' ) {
            Str_Num[i] = '0';
        }else {
            Str_Num[i] = '1';
        }      
    }
    cout << "The new number is " << Str_Num<<endl;
}