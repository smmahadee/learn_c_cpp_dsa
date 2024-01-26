#include <iostream>

using namespace std;

int main() {
    int sizeN;
    cin >> sizeN;

    vector<int> N(sizeN);
    for (int i = 0; i < N.size(); i++) {
        cin >> N[i];
    }

    int sizeM;
    cin >> sizeM;

    vector<int> M(sizeM);
    for (int i = 0; i < M.size(); i++) {
        cin >> M[i];
    }

    int index;
    cin>>index;

    N.insert(N.begin() + index, M.begin(), M.end());  

    for (int i = 0; i < N.size(); i++) {
        cout << N[i] << " ";
    }

    return 0;
}