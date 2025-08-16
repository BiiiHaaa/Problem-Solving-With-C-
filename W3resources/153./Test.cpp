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
        if(i==1) {
            cout <<1;
        }else {
            for(int j=i;j<=((i+i)-1);j++) {
                cout << j;
            }
            for(int n=((i+i)-2);n>=i;n--) {
                cout << n;
            }

        }
        cout<<endl;     
    }
}
