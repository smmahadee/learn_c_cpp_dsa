#include <iostream>

using namespace std;

int main() {
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        string str, findStr;
        cin >> str >> findStr;

        while (str.find(findStr) != -1) {
            str.replace(str.find(findStr), findStr.size(), "#");
        }

        cout << str << endl;
    }

    return 0;
}