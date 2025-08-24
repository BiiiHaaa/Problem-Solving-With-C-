#include <iostream>
using namespace std;

int main() {
    string Word;
    int k = 0, count = 0, check = 0;
    char DoneChar[100];
    int Count[100];

    cout << "Please enter a word : " << endl;
    cin >> Word;

    for (int i = 0; i < Word.size(); i++) {
        bool alreadyProcessed = false;

        // check if character already counted
        for (int j = 0; j < k; j++) {
            if (Word[i] == DoneChar[j]) {
                alreadyProcessed = true;
                break;
            }
        }
        if (alreadyProcessed) continue;

        // count frequency of this character
        count = 0;
        for (int n = 0; n < Word.size(); n++) {
            if (Word[i] == Word[n]) {
                count++;
            }
        }

        // store char and count
        DoneChar[k] = Word[i];
        Count[k] = count;
        k++;
    }

    // check if two characters have same frequency
    for (int i = 0; i < k; i++) {
        for (int j = i + 1; j < k; j++) {
            if (Count[i] == Count[j]) {
                check++;
                break;
            }
        }
    }

    if (check == 0)
        cout << "False";
    else
        cout << "True";
}
