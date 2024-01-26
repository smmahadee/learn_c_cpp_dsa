#include <iostream>

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

Node* recursive_insert(Node* p, int key) {
    if (p == NULL) {
        return p = new Node(key);
    }

    if (key < p->val) {
        p->left = recursive_insert(p->left, key);
    } else {
        p->right = recursive_insert(p->right, key);
    }

    return p;
}

void print_bst_inorder(Node* root) {
    if (root == NULL) return;

    print_bst_inorder(root->left);
    cout << root->val << " ";
    print_bst_inorder(root->right);
}

int main() {
    Node* root = NULL;

    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++) {
        int val;
        cin >> val;
        arr[i] = val;
    }

    for (int i = 0; i < size; i++) {
        root = recursive_insert(root, arr[i]);
    }

    // root = recursive_insert(root, 30);
    // recursive_insert(root, 20);
    // recursive_insert(root, 40);
    print_bst_inorder(root);

    return 0;
}