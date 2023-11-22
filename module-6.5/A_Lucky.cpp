#include <iostream>

using namespace std;

int sum(int num) {
    if (num < 10) return num;

    return num % 10 + sum(num / 10);
}

int main() {
    int testCase;
    cin >> testCase;

    for (int i = 0; i < testCase; i++) {
        string str;
        cin >> str;

        int num1 = stoi(str.substr(0, 3));
        int num2 = stoi(str.substr(3, 3));

        if (sum(num1) == sum(num2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}