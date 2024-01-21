// 50 40 45 30 35 42 32 25 20 10

#include <iostream>

using namespace std;

void insert_heap(vector<int> &v, int val) {
    v.push_back(val);

    size_t curIndex = v.size() - 1;

    while (curIndex != 0) {
        size_t parentIndex = (curIndex - 1) / 2;

        if (v[curIndex] <= v[parentIndex]) break;

        swap(v[curIndex], v[parentIndex]);
        curIndex = parentIndex;
    }
}

int main() {
    // int arr[10] = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10};
    // vector<int> v(arr, arr + 10);

    vector<int> v;

    int size;
    cin >> size;

    while (size--) {
        int val;
        cin >> val;
        insert_heap(v, val);
    }

    for (int val : v) cout << val << " ";

    return 0;
}
