#include <iostream>
using namespace std;

int main() {
    int FirstNum , SecondNum  ;
    cout << "Please enter The first number : " << endl;
    cin >> FirstNum;
    cout << "Please enter The second number : " << endl;
    cin >> SecondNum;
    if(FirstNum!=SecondNum) {
        cout <<FirstNum << "!=" <<SecondNum<<endl;
    }else {
        cout <<FirstNum << "=" <<SecondNum<<endl;
    }
    if(FirstNum>SecondNum) {
        cout <<FirstNum << ">"<<SecondNum<<endl;
    } else {
        cout <<SecondNum << ">"<<FirstNum<<endl;
    }
    if(FirstNum>=SecondNum) {
        cout <<FirstNum << ">="<<SecondNum<<endl;
    } else {
        cout <<SecondNum << ">="<<FirstNum<<endl;
    }
}
