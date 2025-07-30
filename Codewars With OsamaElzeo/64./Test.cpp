#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string String = "I love arrays they are my favorite ";
    string array[100];
    int espace = 0;
    for(int i=0;i<String.size();i++) {
        if(int(String[i])==32) {
            espace++;
        }
    }
    string  temp;
    int count = 0;
    for(int i=0;i<String.size();i++) {
        if(int(String[i])==32 || count==espace) {
            array[count] = temp;
            count++;
            temp ="";
        }else {
            temp+=String[i];
        }
    }
    for(int i=0;i<=espace-1;i++) {
        if(i==0) {
            cout << "[ " << array[i] << " , ";
        }else if(i==espace-1) {
            cout  << array[i] << " ] ";
        }else {
            cout  << array[i] << " , ";
        } 
    }
}