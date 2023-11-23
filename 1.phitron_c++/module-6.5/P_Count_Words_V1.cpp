#include <iostream>
#include <string>

using namespace std;

int countWords(string s) {
    int count = 0;
    bool inWord = false;

    for (char c : s) {
        if (isalpha(c)) {
            inWord = true;
        } else {
            if (inWord) {
                count++;
                inWord = false;
            }
        }
    }

    if (inWord) {
        count++;
    }

    return count;
}

int main() {
    string input;
    getline(cin, input);

    int result = countWords(input);
    
    cout << result << endl;

    return 0;
}