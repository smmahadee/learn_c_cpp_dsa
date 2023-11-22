#include <iostream>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    int count = 0;

    for (int i = 0; i < str.size(); i++) {
        if (count == 0 && str[i] == 'E' || count == 1 && str[i] == 'G' ||
            count == 2 && str[i] == 'Y' || count == 3 && str[i] == 'P') {
            count++;
        }

        if (count == 4 && str[i] == 'T') {
            str.replace(i - 4, 5, " ");
            count = 0;
            i -= 4;
        }
    }

    cout << str;

    return 0;
}