#include <iostream>
#include <cctype>
#include <cmath>
#include <algorithm>
#include <chrono>
#include <vector>
using namespace std;
void Calcgoals(int a , int b , int c) {
    cout << "the total of goals of Messi is : " << a + b + c<<endl;
}
int main () {
    int Laliga , Copaderay , Champinsleage;
    cout << "How many goals did Messi score in Laliga ? "<<endl;
    cin >> Laliga;
    cout << "How many goals did Messi score in Copaderay ? "<<endl;
    cin >> Copaderay;
    cout << "How many goals did Messi score in Champinsleage ? "<<endl;
    cin >> Champinsleage;
    Calcgoals(Laliga , Copaderay , Champinsleage);
}