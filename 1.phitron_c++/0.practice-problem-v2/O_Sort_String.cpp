#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    char str[size];
    cin>>str;

    sort(str, str+size);

    cout << str;

    return 0;
}