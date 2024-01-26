#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

Node* input_binary_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1) {
        root = NULL;
    } else {
        root = new Node(val);
    }
    queue<Node*> q;
    if (root) q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            f->left = new Node(l);
            q.push(f->left);
        } else {
            f->left = NULL;
        }

        if (r != -1) {
            f->right = new Node(r);
            q.push(f->right);
        } else {
            f->right = NULL;
        }
    }

    return root;
}

void printLeaf(Node* root, vector<int>& v) {
    if (root) {
        printLeaf(root->left, v);
        if (!root->left && !root->right) {
            v.push_back(root->val);
        }
        printLeaf(root->right, v);
    }
}

int main() {
    Node* root = input_binary_tree();
    
    vector<int> v;
    printLeaf(root, v);

    sort(v.rbegin(), v.rend());

    for (int val : v) {
        cout << val << " ";
    }

    return 0;
}
