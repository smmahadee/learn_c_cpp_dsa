#include <iostream>
#include <sstream>

using namespace std;

void printReverse(stringstream &ss) {
    string word;
    if (ss >> word) {
        printReverse(ss);
        cout << word << endl;
    }
}

int main() {
    string str = "I am mehedi";

    stringstream ss(str);
    // string word;
    // while (ss >> word) {
    //     cout << word << endl;
    // }

    printReverse(ss);

    return 0;
}