#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    char str[size];
    cin >> str;

    int freqArr[26] = {0};

    for (int i = 0; i < size; i++) {
        int index = str[i] - 97;
        freqArr[index]++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < freqArr[i]; j++) {
            char ch = i + 97;
            cout << ch;
        }
    }

    cout << endl;

    return 0;
}