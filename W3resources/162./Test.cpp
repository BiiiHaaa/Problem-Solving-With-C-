#include <iostream>
using namespace std;

int main() {
    int Num , count = 0 ;
    cout << "Please enter a number : ";
    cin >> Num;
    int Number = Num;
    for(int i=0;i<=9;i++) {
        while(Num>0) {
            if((Num%10)==i) {
                count++;
            }
            Num=int(Num/10);
        }
        cout << "The frequency of " << i << " is : " << count;
        cout <<endl;
        count = 0;
        Num=Number;
    }
}
