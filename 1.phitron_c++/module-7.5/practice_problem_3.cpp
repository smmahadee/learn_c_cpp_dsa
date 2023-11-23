#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string str, findStr;
    getline(cin, str);
    cin >> findStr;

    stringstream ss(str);

    string word;
    int count = 0;

    while (ss >> word) {
        if (word.find(findStr) == 0) count++;
    }

    cout<<count<<endl;

    return 0;
}