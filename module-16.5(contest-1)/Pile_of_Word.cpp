#include <iostream>
using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    while (testCase--) {
        string str1, str2;
        cin >> str1 >> str2;

        if (str1.size() != str2.size()) {
            cout << "NO" << endl;
        } else {
            int freqArr[26] = {0}; // Initialize the array to 0

            for (int i = 0; i < str1.size(); i++) {
                int index = str1[i] - 'a';
                freqArr[index]++;
            }

            for (int i = 0; i < str2.size(); i++) {
                int index = str2[i] - 'a';
                freqArr[index]++;
            }

            int flag = 1;
            for (int i = 0; i < 26; i++) {
                if (freqArr[i] % 2 != 0) {
                    flag = 0;
                    break;
                }
            }

            if (flag) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
