#include <iostream>

using namespace std;

int main() {
    string str = "Hello World";

    // cout << str << endl;
    // cout << str.size() << endl;

    // if (str.empty())
    //     cout << "Empty" << endl;
    // else
    //     cout << "Not Empty" << endl;

    str.resize(5);

    cout << str << endl;
    // cout << str.size() << endl;

    return 0;
}