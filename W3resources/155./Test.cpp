#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;
    int l=0;
    for(int i=1;i<=rows;i++) {
        for(int j=1;j<=rows-l;j++) {
        cout<<j; 
        }
        l++;    
        cout<<endl;     
    }
}
