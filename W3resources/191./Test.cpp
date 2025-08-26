#include <iostream>
#include <cctype> // for isdigit
using namespace std;

int main() {
    string Word = "w3resource from 2008";
    int Sum = 0;
    int Num = 0;
    bool inNumber = false;

    for (int i = 0; i < Word.size(); i++) {
        if (isdigit(Word[i])) {
            // convert char -> int
            Num = Num * 10 + (Word[i] - '0');
            inNumber = true;
        } else {
            if (inNumber) {
                Sum += Num; // add the complete number
                Num = 0;
                inNumber = false;
            }
        }
    }

    // add last number if string ends with digit
    if (inNumber) {
        Sum += Num;
    }

    cout << "Sum = " << Sum << endl;
    return 0;
}
