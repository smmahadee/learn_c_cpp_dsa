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

// 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1

void level_order_traverse(Node* root) {
    if (root == NULL) {
        cout << "Empty tree";
        return;
    }

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left) q.push(f->left);
        if (f->right) q.push(f->right);
    }
}

void in_order_traverse(Node* root) {
    if (root == NULL) return;

    in_order_traverse(root->left);
    cout << root->val << " ";
    in_order_traverse(root->right);
}

bool search_binary_tree(Node* root, int x) {
    if (root == NULL) {
        return false;
    } else if (root->val == x) {
        return true;
    } else if (x < root->val) {
        return search_binary_tree(root->left, x);
    } else {
        return search_binary_tree(root->right, x);
    }
}

int main() {
    Node* root = input_binary_tree();
    // in_order_traverse(root);

    if (search_binary_tree(root,1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}