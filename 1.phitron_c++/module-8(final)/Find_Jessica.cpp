#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    stringstream ss(str);

    string word;
    int count = 0;

    int flag = 0;
    while (ss >> word) {
        if (word.size() != 7) {
            continue;
        }
        if (word.find("Jessica") == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}