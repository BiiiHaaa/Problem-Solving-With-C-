/*

Sample Output:
Print the name in reverse where last name comes first:
-----------------------------------------------------------
Input First Name: Alexandra
Input Last Name: Abramov
Name in reverse is: Abramov Alexandra
 
*/

#include <iostream>
using namespace std;

int main() {
    string First_Name  , Last_Name;
    cout << "Please enter your First Name : " <<endl;
    cin >> First_Name;
    cout << "Please enter your Last Name : " <<endl;
    cin >> Last_Name;
    cout << "Name in reverse is : " << Last_Name +" "+  First_Name;
}
