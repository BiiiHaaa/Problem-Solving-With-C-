#include <iostream>
using namespace std;
int main() {
    int Sum=0;
    for(int i=1;i<=4;i++) {
        for(int j=1;j<=4;j++) {
            if(i==j) {
                continue;
            }else {
                for(int k=1;k<=4;k++) {
                    if(i==k || k==j) {
                        continue;
                    }else {
                        cout << " " << i << j<< k<< " ";
                        Sum++;
                    }
                }
            }
        }
    }
    cout << endl << "Total number of the three-digit-number is : "<<Sum;
}
