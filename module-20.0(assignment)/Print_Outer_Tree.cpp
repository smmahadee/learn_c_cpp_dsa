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

void printLeftSide(Node* root) {
    if(root->left) {
        printLeftSide(root->left);
    }else if(root->right) {
        printLeftSide(root->right);
    }

    cout<<root->val<<" ";
}

void printRightSide(Node* root) {
    cout << root->val << " ";

    if(root->right) {
        printRightSide(root->right);
    }else if(root->left) {
        printRightSide(root->left);
    }
}

int main() {
    Node* root = input_binary_tree();
    if(root->left) printLeftSide(root->left);
    cout<<root->val<<" ";
    if (root->right) printRightSide(root->right);

    return 0;
}