// 50 40 45 30 35 42 32 25 20 10

#include <iostream>

using namespace std;

void insert_heap(vector<int> &v, int val) {
    v.push_back(val);

    size_t curIndex = v.size() - 1;

    while (curIndex != 0) {
        size_t parentIndex = (curIndex - 1) / 2;

        if (v[curIndex] >= v[parentIndex]) break;

        swap(v[curIndex], v[parentIndex]);
        curIndex = parentIndex;
    }
}

void delete_min_heap(vector<int> &v) {
    v[0] = v[v.size() - 1];
    v.pop_back();
    int curIndex = 0;

    while (true) {
        int leftIndex = curIndex * 2 + 1;
        int rightIndex = curIndex * 2 + 2;
        int lastIndex = v.size() - 1;

        // check first -> left child and right child 
        if (leftIndex <= lastIndex && rightIndex <= lastIndex) {
            if (v[leftIndex] <= v[rightIndex] && v[leftIndex] < v[curIndex]) {
                swap(v[leftIndex], v[curIndex]);
                curIndex = leftIndex;
            } else if (v[rightIndex] <= v[leftIndex] &&
                       v[rightIndex] < v[curIndex]) {
                swap(v[rightIndex], v[curIndex]);
                curIndex = rightIndex;
            } else {
                break;
            }
        }
        // left child greater than right child and parent
         else if (leftIndex <= lastIndex && v[leftIndex] < v[curIndex]) {
            swap(v[leftIndex], v[curIndex]);
            curIndex = leftIndex;
        } 
        // right child greater than left child and parent
        else if (rightIndex <= lastIndex && v[rightIndex] < v[curIndex]) {
            swap(v[rightIndex], v[curIndex]);
            curIndex = rightIndex;
        } else {
            break;
        }
    }
}

// 10 20 15 18 16 30 35

int main() {
    vector<int> v;

    int size;
    cin >> size;

    while (size--) {
        int val;
        cin >> val;
        insert_heap(v, val);
    }

    delete_min_heap(v);

    for (int val : v) cout << val << " ";

    return 0;
}
