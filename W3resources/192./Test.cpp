#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word_1 , Word_2 ,Word_3;
    int Count=0 , size;
    cout << "Please enter the first word : " << endl;
    cin >> Word_1;
    cout << "Please enter the second word : " << endl;
    cin >> Word_2;
    cout << "Please enter the third word : " << endl;
    cin >> Word_3;
    if(Word_1.size()<Word_2.size()&&Word_1.size()<Word_3.size()) {
        size  = Word_1.size();
    }else if(Word_2.size()<Word_1.size()&&Word_2.size()<Word_3.size()) {
        size  = Word_2.size();
    }else {
        size  = Word_3.size();
    }
    for(int i=0;i<size;i++) {
        if(Word_1[i]==Word_2[i] && Word_1[i]==Word_3[i]) {
            Count++;
        }else {
            break;
        }
    }
    cout << "The longest common prefix is : " ;
    for(int i=0;i<Count;i++) {
        cout  << Word_1[i];
    }
}
