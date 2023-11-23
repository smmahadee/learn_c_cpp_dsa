#include <string.h>

#include <iostream>

using namespace std;

int main() {
    char str[100001];

    while (cin.getline(str, 100001)) {
        int strLength = strlen(str);

        int freqArr[26] = {0};

        for (int i = 0; i < strLength; i++) {
            if (str[i] != ' ') {
                int index = str[i] - 97;
                freqArr[index]++;
            }
        }

        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < freqArr[i]; j++) {
                char ch = i + 97;
                cout << ch;
            }
        }

        cout << endl;
    }

    return 0;
}