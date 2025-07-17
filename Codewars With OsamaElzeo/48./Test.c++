#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
int main () {
    string Animal = "electric eel";
    string Dish = "lasagna";
    int check = 0;
    for(int i =0;i<Animal.size();i++){
        for(int j =0;j<Dish.size();j++) {
            if((i==0)&&(j==0)) {
                if(Animal[i]==Dish[j]) {
                    check++;
                }
            }else if((i==Animal.size()-1)&&(j==Dish.size()-1)){
                if(Animal[i]==Dish[j]) {
                    check++;
                }
            }
        }
    }
    if(check==2) {
        cout << "True" <<endl;
    }else {
        cout << "False" <<endl;
    }
}