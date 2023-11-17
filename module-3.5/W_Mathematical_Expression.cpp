#include <iostream>

using namespace std;

int main() {
    int num1, num2, result;
    char sign, equal;

    cin >> num1 >> sign >> num2 >> equal >> result;

    if (sign == '+') {
        if (num1 + num2 == result) {
            cout << "Yes";
        } else {
            cout << num1 + num2;
        }
    } else if (sign == '-') {
        if (num1 - num2 == result) {
            cout << "Yes";
        } else {
            cout << num1 - num2;
        }
    } else {
        if (num1 * num2 == result) {
            cout << "Yes";
        } else {
            cout << num1 * num2;
        }
    }

    return 0;
}