#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    int sum = 0;
    int Nums[] = {10 , -20 , 30 , -40 , 50 , -60 , 70 , -80 , 90 , -100};
    int temp;
    cout << "The array before they are arranged : " << endl;
    for(int i=0;i<(sizeof(Nums)/sizeof(Nums[0]));i++) {
        if(i==0) {
            cout << "[ " << Nums[i] << " , ";
        }else if(i==(sizeof(Nums)/sizeof(Nums[0]))-1) {
            cout << Nums[i] << " ] ";
        }else {
            cout << Nums[i] << " , ";            
        }
    }
    cout << endl;
    for(int i=0;i<(sizeof(Nums)/sizeof(Nums[0]));i++) {
        for(int j=i+1;j<(sizeof(Nums)/sizeof(Nums[0]));j++) {
            if(Nums[i]<Nums[j]){
                temp = Nums[i];
                Nums[i] =  Nums[j];
                Nums[j] = temp;
            }
        }
    }
    cout << "The array after they are arranged : " << endl;
    for(int i=0;i<(sizeof(Nums)/sizeof(Nums[0]));i++) {
        if(i==0) {
            cout << "[ " << Nums[i] << " , ";
        }else if(i==(sizeof(Nums)/sizeof(Nums[0]))-1) {
            cout << Nums[i] << " ] ";
        }else {
            cout << Nums[i] << " , ";            
        }
    }
    cout << endl;
    cout << "The array after delete the first and the last value " << endl;
    for(int i=0;i<(sizeof(Nums)/sizeof(Nums[0]));i++) {
        if(i==0) {
            continue;
        }else if (i==1) {
            cout << "[ " << Nums[i] << " , ";
        }else if(i==(sizeof(Nums)/sizeof(Nums[0]))-1) {
            continue;
        }else if(i==(sizeof(Nums)/sizeof(Nums[0]))-2){
            cout << Nums[i] << " ] ";  
        }
        else {
            cout << Nums[i] << " , ";            
        }
    }
    cout << endl;
    cout << "La Somme de :" << endl;
    for(int i=0;i<(sizeof(Nums)/sizeof(Nums[0]));i++) {
        if(i==0) {
            continue;
        }else if (i==1) {
            sum+=Nums[i];
            cout << "[ " << Nums[i] << " + ";
        }else if(i==(sizeof(Nums)/sizeof(Nums[0]))-1) {
            continue;
        }else if(i==(sizeof(Nums)/sizeof(Nums[0]))-2){
            cout << Nums[i] << " ] "; 
            sum+=Nums[i];  
        }
        else {
            cout << Nums[i] << " + "; 
            sum+=Nums[i];           
        }
    }
    cout << endl;
    cout << " est : " << sum << " "; 
}