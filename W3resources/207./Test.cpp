#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word_1 = "Check first string" ,Word_2 = "sifC";
    int Count = 0;
    //cout  << "Please enter the first Word : "<<endl;
    //cin>> Word_1;
    //cout  << "Please enter the second Word : "<<endl;
    //cin>> Word_2;
    for(int i=0;i<Word_2.size();i++) {
        for(int j=0;j<Word_1.size();j++) {
            if(Word_1[j]==Word_2[i]) {
                Count++;
                break;
            }
        }    
    }
    if(Count==Word_2.size()) {
        cout <<"True";
    }else {
        cout <<"False";
    }
}
