#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;
    int l=rows+2;
    int count = 0;
    for(int i=1;i<=rows;i++) {
        for(int m=1;m<=l;m++) {
            cout<<' '; 
        }
        l--;
        for(int j=65;j<=90;j++) {
            cout<<char(j);
            count++;
            if(count==(i)){
                break;
            } 
        }
        if(count==1) {
            cout<<endl;
            count=0;
            continue;
        }else {
            count-=2;
            for(int k=(65+count);k>=65;k--) {
            cout<<char(k); 
            }
        }
        count=0;
        cout<<endl;     
    }
}
