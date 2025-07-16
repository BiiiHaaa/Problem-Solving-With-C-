/*

Write a C++ program to print the code (ASCII code / Unicode code etc.) of a given character.

Sample Output:
Print code (ASCII code / Unicode code etc.) of a given character:
-----------------------------------------------------------------------
Input a character: a
The ASCII value of a is: 97
The character for the ASCII value 97 is: a
*/

#include <iostream>
using namespace std;

int main() {
    char character;
    cout << "Please enter a character : " << endl;
    cin >> character; 
    cout << "The ASCII value of " << character <<" is : " << int(character) <<endl;
    cout << "The character for the ASCII value " << int(character) <<" is : " << char(int(character)) <<endl;
}
