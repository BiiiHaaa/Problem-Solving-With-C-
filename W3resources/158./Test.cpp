#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;
    int M= 2;
    int temp=rows;
    for(int i=1;i<=rows;i++) {
        for(int n=1;n<=M;n++) {
            cout << " ";
        }
        M++;
        for(int j=1;j<=temp;j++) {
        cout<<j ; 
        }
        for(int l=temp-1;l>=1;l--) {
        cout<<l ; 
        }
        temp--;    
        cout<<endl;     
    }
}
