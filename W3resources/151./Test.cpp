#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;
    int l=rows+2;
    for(int i=1;i<=rows;i++) {
        for(int m=1;m<=l;m++) {
            cout<<' '; 
        }
        l--;
        for(int j=1;j<i;j++) {
            cout<<j; 
        }
        for(int k=i;k>=1;k--) {
            cout<<k; 
        }
        cout<<endl;     
    }
}
