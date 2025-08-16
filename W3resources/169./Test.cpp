#include <iostream>
using namespace std;

int main() {
    int Num ;
    cout << "Input number of rows :  "<<endl;
    cin >> Num;
    for(int i=1;i<=Num;i++) {
        for(int j=1;j<=Num;j++) {
            if(i%2!=0) {
                if(j%2!=0) {
                    cout << " Black ";
                }else {
                    cout << " White ";
                }
            }else {
                if(j%2!=0) {
                    cout << " White ";
                }else {
                    cout << " Black ";
                }
            }
        }
        cout <<endl;
    }
}
