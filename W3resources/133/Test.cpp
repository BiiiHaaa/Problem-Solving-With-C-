#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int Num , Sum=0 , First = 0 , Second = 1 , Temp;
    cout << "Please enter a Number : " <<endl;
    cin >>Num;
    cout << "La somme de : " ;
    for(int i=1;i<=Num;i++) {
        if(i==1) {
            cout << First << " , ";//0
            cout << Second << " , "; //1
        }    
        cout <<First + Second<< " , ";//1 , 2 ,5
        Temp=Second; // 1 , 2 , 3
        Second = First + Second; // 1 , 3  , 5
        First = Temp; // 1 , 2  , 3
    }
}