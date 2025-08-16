#include <iostream>
using namespace std;

int main() {
    int Num  ;
    string Word;
    string Zero = " oreZ ";
    string One = " enO ";
    string Two = " owT ";
    string Three = " eerhT ";
    string Four = " ruoF ";
    string Five = " eviF ";
    string Six = " xiS ";
    string Seven = " neveS ";
    string eight = " thgiE ";
    string Nine = " eniN ";
    cout << "Please enter a number : "<<endl;
    cin >> Num;
    while(Num>0) {
        if(Num%10==0) {
            Word+=Zero;
        }else if(Num%10==1) {
            Word+=One; 
        }else if(Num%10==2) {
            Word+=Two; 
        }else if(Num%10==3) {
            Word+=Three; 
        }else if(Num%10==4) {
            Word+=Four; 
        }else if(Num%10==5) {
            Word+=Five; 
        }else if(Num%10==6) {
            Word+=Six; 
        }else if(Num%10==7) {
            Word+=Seven; 
        }else if(Num%10==8) {
            Word+=eight; 
        }else if(Num%10==9) {
            Word+=Nine; 
        }
        Num = int(Num/10);
    }
    for(int i=(Word.size()-1);i>=0;i--) {
        cout <<Word[i];
    }
}
