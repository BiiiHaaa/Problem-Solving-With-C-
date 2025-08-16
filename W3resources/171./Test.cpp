#include <iostream>
using namespace std;

int main() {
    int Num , TempNum;
    cout << "Please enter a number : " << endl;
    cin >> Num;
    TempNum = Num;
    for(int i=0;i<=Num;i++) {
        for(int j=i;j>0;j--) {
            cout<< " " <<j << " ";
        }
        for(int k=0;k<=TempNum;k++) {
            cout<< " " <<k << " ";
        }
        cout << endl;
        TempNum--;
    }
}
