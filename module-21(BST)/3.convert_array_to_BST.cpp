#include <iostream>
#include <queue>

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

void in_order_traverse(Node* root) {
    if (root == NULL) return;

    in_order_traverse(root->left);
    cout << root->val << " ";
    in_order_traverse(root->right);
}

Node* convert(int* arr, int l, int r) {
    if (l > r) return NULL;

    int mid = (l + r) / 2;

    Node* root = new Node(arr[mid]);
    Node* leftRoot = convert(arr, l, mid - 1);
    Node* rightRoot = convert(arr, mid + 1, r);

    root->left = leftRoot;
    root->right = rightRoot;
    return root;
}

int main() {
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    Node* root = convert(arr, 0, size - 1);

    in_order_traverse(root);

    return 0;
}