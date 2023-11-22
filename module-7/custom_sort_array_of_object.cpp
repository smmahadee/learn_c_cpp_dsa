#include <algorithm>
#include <iostream>

using namespace std;

class Alphabet {
   public:
    char value;
    int count;
};

bool cmp(Alphabet a, Alphabet b) {
    if (a.count == b.count) {
        return a.value < b.value;
    } else {
        return a.count > b.count;
    }
}

int main() {
    string str;
    cin >> str;

    Alphabet alph[26];
    for (int i = 0; i < 26; i++) {
        alph[i].value = char(i + 'a');
        alph[i].count = 0;
    }

    for (int i = 0; i < str.size(); i++) {
        int index = str[i] - 'a';
        alph[index].count++;
    }

    sort(alph, alph + 26, cmp);

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < alph[i].count; j++) {
            cout << alph[i].value;
        }
    }

    cout << endl;

    return 0;
}
