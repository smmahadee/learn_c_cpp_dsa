#include <iostream>

using namespace std;

int main() {
    string str;
    getline(cin, str);



    while (str.find("EGYPT") != -1) {
        str.replace(str.find("EGYPT"), 5, " ");
        // foundPositon = str.find("EGYPT", foundPositon + 1);
    }

    // int foundPositon = str.find("EGYPT");

    // while (foundPositon != str.npos) {
    //     str.replace(foundPositon, 5, " ");
    //     foundPositon = str.find("EGYPT", foundPositon + 1);
    // }

    cout << str << endl;

    return 0;
}