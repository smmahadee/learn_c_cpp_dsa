#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    stringstream ss(str);

    string word;

    int totalWords = 0;

    while (ss >> word) {
        for (char ch : word) {
            if (isalpha(ch)) {
                totalWords++;
                break;
            }
        }
    }

    cout<< totalWords<<endl;

    return 0;
}