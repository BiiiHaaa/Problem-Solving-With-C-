#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Even_Num;
    int count = 0 ;
    cout << "Please enter the number of the even number : "<< endl;
    cin >> Even_Num;
    cout << "The Number "<<Even_Num << " in the even number is : "<< (Even_Num*2)-2<<endl;    
}

/*
1==0
2==2
3==4
4==6
5==8
6==10
7==12
8==14
9==16
10==18
11==20
12==22
13==24
*/