#include <iostream>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        int strLength;
        cin >> strLength;
        string str;
        cin >> str;

        int freqArr[26] = {0};
        int total = 0;

        for (int i = 0; i < strLength; i++) {
            int index = str[i] - 65;

            if (freqArr[index] == 0) {
                total += 2;
                freqArr[index]++;
            } else {
                total++;
            }
        }

        cout << total << endl;
    }

    return 0;
}