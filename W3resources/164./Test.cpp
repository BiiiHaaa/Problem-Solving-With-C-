#include <iostream>
using namespace std;

int main() {
    int Start , End  ;
    cout << "Please enter the starting value for ASCII characters : "<<endl;
    cin >> Start;
    cout << "Please enter the ending value for ASCII characters : "<<endl;
    cin >> End;
    for(int i=Start;i<=End;i++) {
        cout << i<< "-->" << char(i)<<endl; 
    }
}
