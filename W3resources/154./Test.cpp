#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;
    int l=rows+2;
    for(int i=1;i<=rows;i++) {
        for(int j=i;j<=rows;j++) {
        cout<<j; 
             
        }    
        cout<<endl;     
    }
}
