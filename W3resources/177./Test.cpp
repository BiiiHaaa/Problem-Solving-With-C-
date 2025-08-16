#include <iostream>
using namespace std;
int main() {
    int characters = 0 , alphabets = 0, digits = 0, spaces = 0,  other_characters= 0; 
    string Word = "This is w3resource.com";
    for(int i=0;i<Word.size();i++) {
        characters++;
        if 
        ( Word[i] == 'A' || Word[i] == 'B' || Word[i] == 'C' || Word[i] == 'D' || Word[i] == 'E' ||
            Word[i] == 'F' || Word[i] == 'G' || Word[i] == 'H' || Word[i] == 'I' || Word[i] == 'J' ||
            Word[i] == 'K' || Word[i] == 'L' || Word[i] == 'M' || Word[i] == 'N' || Word[i] == 'O' ||
            Word[i] == 'P' || Word[i] == 'Q' || Word[i] == 'R' || Word[i] == 'S' || Word[i] == 'T' ||
            Word[i] == 'U' || Word[i] == 'V' || Word[i] == 'W' || Word[i] == 'X' || Word[i] == 'Y' || Word[i] == 'Z' ||

            Word[i] == 'a' || Word[i] == 'b' || Word[i] == 'c' || Word[i] == 'd' || Word[i] == 'e' ||
            Word[i] == 'f' || Word[i] == 'g' || Word[i] == 'h' || Word[i] == 'i' || Word[i] == 'j' ||
            Word[i] == 'k' || Word[i] == 'l' || Word[i] == 'm' || Word[i] == 'n' || Word[i] == 'o' ||
            Word[i] == 'p' || Word[i] == 'q' || Word[i] == 'r' || Word[i] == 's' || Word[i] == 't' ||
            Word[i] == 'u' || Word[i] == 'v' || Word[i] == 'w' || Word[i] == 'x' || Word[i] == 'y' || Word[i] == 'z') 
        { 
            alphabets++;
        }else if(Word[i]=='1' ||Word[i]=='2' ||Word[i]=='3' ||Word[i]=='4' ||Word[i]=='5' ||Word[i]=='6' ||Word[i]=='7' ||Word[i]=='8' ||Word[i]=='9' ) {
            digits++;
        }else if(Word[i]== ' ') {
            spaces++;
        }else {
            other_characters++;
        }
    }
    cout << "The number of characters in the string is : "<<characters<<endl;
    cout << "The number of alphabets are : " << alphabets<<endl;
    cout << "The number of digits are : " <<digits <<endl;
    cout << "The number of spaces are : " <<spaces <<endl;
    cout << "The number of other characters are:" << other_characters<<endl;
}
