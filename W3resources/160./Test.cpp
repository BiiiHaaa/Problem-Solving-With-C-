#include <iostream>
using namespace std;

int main() {
    int Num , i=0 , FirstNum , LastNum;
    cout << "Please enter a number : ";
    cin >> Num;
    while(Num>0) {
        if(i==0) {
            LastNum=Num%10;
            Num = int(Num/10);
            i++;
        }else {
            FirstNum = Num%10;
            Num = int(Num/10);
            i++;
        }
    }
    cout << "The first number is : " <<FirstNum << endl << " And the Last number is : " << LastNum << endl << "The sum of the first number and last number is : " << FirstNum+LastNum;
}
