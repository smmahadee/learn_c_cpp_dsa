#include <iostream>
#include <queue>
#include <utility>

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

int count_height(Node* root) {
    if(root == NULL) return 0;

    int leftHeight = count_height(root->left);
    int rightHeight = count_height(root->right);

    return 1 + max(leftHeight, rightHeight);
}

int main() {
    Node* root = input_binary_tree();
    int inputLevel;
    cin>>inputLevel;

    int height = count_height(root);
    if(inputLevel < 0 || inputLevel > height -1) {
        cout<<"Invalid";
        return 0;
    }

    queue<pair<Node*, int> > q;
    q.push({root, 0});

    while (!q.empty()) {
        pair<Node*, int> f = q.front();
        q.pop();

        Node* node = f.first;
        int nodeLevel = f.second;

        if (nodeLevel == inputLevel) {
           cout<<node->val<<" ";
        };

        if (node->left) q.push({node->left, nodeLevel + 1});
        if (node->right) q.push({node->right, nodeLevel + 1});
    }

    return 0;
}