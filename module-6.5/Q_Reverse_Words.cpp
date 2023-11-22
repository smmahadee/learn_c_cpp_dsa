#include <algorithm>
#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    stringstream ss(str);

    string word;

    int isFirstWord = 1;

    while (ss >> word) {
        reverse(word.begin(), word.end());

        if (isFirstWord) {
            cout << word;
            isFirstWord = 0;
        } else {
            cout << " " << word;
        }
    }

    return 0;
}