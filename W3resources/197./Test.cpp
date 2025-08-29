#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    char Char[100];
    int CheQ=0 , Count=0;
    string Word_1 , Word_2   ;
    bool IsThere = true;
    cout << "Please enter The first word : "<<endl;
    cin>> Word_1;
    cout << "Please enter The second word : "<<endl;
    cin>> Word_2;
    for(int i=0;i<Word_1.size();i++) {
        // i=4 Word[i]=o
        for(int j=0;j<CheQ;j++) {
            // j=2 Word[j]=l
            if(Word_1[i]==Char[j]) {
                IsThere = false;
                break;
            } 
        }
        if(IsThere) {
            Count++; //4
            Char[CheQ] = Word_1[i]; // h , e , l , o 
            CheQ++;//4
        }else {
            IsThere = true;
        }
    }
    for(int i=0;i<Word_2.size();i++) {
        // i=4 Word[i]=d
        for(int j=0;j<CheQ;j++) {
            // j=2 Word[j]=l
            if(Word_2[i]==Char[j]) {
                IsThere = false;
                break;
            } 
        }
        if(IsThere) {
            Count++;//6
            Char[CheQ] = Word_2[i]; // h , e , l , o , w , r , d
            CheQ++;//6
        }else {
            IsThere = true;
        }
    }
    cout <<Count;
}
