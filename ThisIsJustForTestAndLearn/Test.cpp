#include <iostream>
using namespace std;
void CalC(int Nums[] , int count) {
        int sum = 0 ; 
        for(int i = 0 ; i <count ; i++) {
            sum = sum +Nums[i];
        }
        cout<< "Le resultat est : " << sum << endl;

}
int main () {
    int Nums[] = {10 , 10 , 10 , 10};
    int Size = size(Nums);
    CalC(Nums , Size);
}