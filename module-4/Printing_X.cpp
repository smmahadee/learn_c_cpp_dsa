#include <iostream>

using namespace std;

int main() {
    int size;
    scanf("%d", &size);

    int firstSpace = 0, midSpace = size - 2;

    // print first part
    for (int i = 0; i < size / 2; i++) {
        for (int i = 0; i < firstSpace; i++) {
            cout << " ";
        }

        cout << '\\';

        for (int i = 0; i < midSpace; i++) {
            cout << " ";
        }

        cout << '/' << endl;

        firstSpace++;
        midSpace -= 2;
    }

    // print X part
    for (int i = 0; i <= size / 2; i++) {
        if (i < size / 2) {
            cout << " ";
        } else {
            cout << 'X' << endl;
        }
    }

    // print last part
    firstSpace = (size / 2) - 1, midSpace = 1;
    for (int i = 0; i < size / 2; i++) {
        for (int i = 0; i < firstSpace; i++) {
            cout << " ";
        }

        cout << '/';

        for (int i = 0; i < midSpace; i++) {
            cout << " ";
        }

        cout << '\\' << endl;

        firstSpace--;
        midSpace += 2;
    }

    return 0;
}