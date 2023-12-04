#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str;
    cin >> str;

    string queryStr = "EGYPT";

    int result = str.find(queryStr);

    while (result != -1) {
        str.replace(result, queryStr.size(), " ");
        result = str.find(queryStr);
    }

    cout << str;

    return 0;
}