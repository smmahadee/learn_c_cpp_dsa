#include <iostream>

using namespace std;

int main() {
    string str = "Hello world";

    string::iterator str_it;

    for (str_it = str.begin(); str_it < str.end(); str_it++) {
        cout << *str_it << " ";
    }

    return 0;
}