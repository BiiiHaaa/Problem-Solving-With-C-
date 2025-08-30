#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Number;
    cout << "Please enter a number : " << endl;
    cin >> Number;
    int Size = Number.size() , Count=1;
    if(Size<=3) {
        cout << Number;
        goto Finish;
    }
    else if(Size%3==0) {
        for(int i=0;i<Size;i++) {
            if(i==Size-1){
                cout <<Number[i];
                goto Finish;
            }else if(Count%3==0) {
                cout <<Number[i]<<",";
                Count++;
            }else {
                cout <<Number[i];
                Count++;
            }
        }
    }else if((Size-1)%3==0) {
        for(int i=0;i<Size;i++) {
            if(i==0) {
                cout <<Number[i]<<",";
            }else if(i==Size-1){
                cout <<Number[i];
                goto Finish;
            }else {
                if(Count%3==0) {
                cout <<Number[i]<<",";
                Count++;
                }else {
                    cout <<Number[i];
                    Count++;
                }
            }
        }
    }else {
        for(int i=0;i<Size;i++) {
            if(i==0) {
                cout <<Number[i];
            }else if(i==1) {
                cout <<Number[i]<<",";
            }else if(i==Size-1){
                cout <<Number[i];
                goto Finish;
            }else {
                if(Count%3==0) {
                cout <<Number[i]<<",";
                Count++;
                }else {
                    cout <<Number[i];
                    Count++;
                }
            }
        }
    }
    Finish:
}
