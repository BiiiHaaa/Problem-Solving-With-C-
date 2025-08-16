#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;
    int M= rows+2;
    int l=0;
    for(int i=1;i<=rows;i++) {
        for(int n=1;n<=M;n++) {
            cout << " ";
        }
        M--;
        for(int j=i;j>=1;j--) {
        cout<<j ; 
        }    
        cout<<endl;     
    }
}
