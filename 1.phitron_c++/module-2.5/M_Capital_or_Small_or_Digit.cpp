#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z') {
        cout << "ALPHA" << endl;

        if (ch >= 'A' && ch <= 'Z') {
            cout << "IS CAPITAL" << endl;
        } else {
            cout << "IS SMALL" << endl;
        }
    } else {
        cout << "IS DIGIT" << endl;
    }

    return 0;
}