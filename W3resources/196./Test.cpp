#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word  , SubSe;
    int StartDeJ , Count=0 , check;
    cout << "Please enter a Word : "<<endl;
    cin>> Word;
    cout << "Please enter The subse to check it : "<<endl;
    cin>> SubSe;
    StartDeJ = 0;
    //C G T T C G G C T A T C G T A C G T T C T A T T C T A T G A T T T C T A A
    //C G T T C G G C T A T G C Z TTCTACTTATTCTA
    for(int i=0;i<SubSe.size();i++) {
        for(int j=StartDeJ;i<Word.size();j++) {
            if(Word[j]==SubSe[i]) {
                StartDeJ++;
                break;
            }else if(j==Word.size()-1&&SubSe[i]!=Word[Word.size()-1]) {
                Count++;
                goto finish;
            }
        }
    }
    finish:
    if(Count==0) {
        cout <<"True"; 
    }else {
        cout <<"False";
    }
}
