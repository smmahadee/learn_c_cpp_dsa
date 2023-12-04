#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    stringstream ss(str);

    string word;

    while (ss >> word) {
        reverse(word.begin(), word.end());
        cout << word << " ";
    }

    return 0;
}