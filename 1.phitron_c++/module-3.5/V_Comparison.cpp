#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char sign;

    cin >> num1 >> sign >> num2;

    if ((sign == '>' && num1 > num2) || (sign == '<' && num1 < num2) ||
        (sign == '=' && num1 == num2)) {
        cout << "Right";
    } else {
        cout << "Wrong";
    }

    return 0;
}