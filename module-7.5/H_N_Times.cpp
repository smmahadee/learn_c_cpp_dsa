#include <iostream>

using namespace std;

void printNTimes(int size, char ch) {
    if (size > 0) {
        printNTimes(size - 1, ch);
        cout << ch << " ";
    }
}

int main() {
    int testCase;
    cin >> testCase;

    while (testCase > 0) {
        int size;
        char ch;
        cin >> size >> ch;

        printNTimes(size, ch);
        cout << endl;

        testCase--;
    }

    return 0;
}