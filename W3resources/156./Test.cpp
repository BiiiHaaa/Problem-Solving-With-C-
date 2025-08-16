#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;
    int l=0;
    for(int i=1;i<=rows;i++) {
        for(int j=rows-l;j>=1;j--) {
        cout<<j << " "; 
        }
        l++;    
        cout<<endl;     
    }
}
