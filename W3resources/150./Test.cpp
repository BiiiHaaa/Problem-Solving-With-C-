#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Input number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        // Print spaces for pyramid shape
        for (int space = 0; space < rows - i - 1; space++) {
            cout << "  ";
        }

        int num = 1; // First number in each row
        for (int j = 0; j <= i; j++) {
            cout << num << "   ";
            num = num * (i - j) / (j + 1); // Compute next value in row
        }
        cout << endl;
    }

    return 0;
}
