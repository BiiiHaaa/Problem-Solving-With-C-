#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void check (int health ,int damage) {
    if(health>damage) {
        cout << "The new halth is : " << health - damage <<endl; 
    }else {
        cout << "The new halth is : " << 0 <<endl;
    }
}
int main () {
    int health , damage;
    cout << "Give the value of the health of the player" <<endl;
    cin >> health;
    cout << "Give the value of the damage of the player"<<endl;
    cin >> damage;
    check(100 , 5);
    check(83 , 16);
    check(20 , 30);
}