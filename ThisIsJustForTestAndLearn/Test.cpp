#include <iostream>
using namespace std;
void SayHello(string Msg,string Nom,string Prenom,int Age) {
    cout << Msg<<" "<<Nom<<" "<<Prenom<<" ,How are You Today Your age is : "<<Age<<endl;
}

int main () {
    SayHello("Hello","Chaoufi" , "Brahim" , 21);
}