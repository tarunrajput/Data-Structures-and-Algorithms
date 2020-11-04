#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

int maxDepth(Node *root) {
    int leftHeight, rightHeight;

    if (!root)
        return 0;

    leftHeight = maxDepth(root->left);
    rightHeight = maxDepth(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int main(int argc, char const *argv[])
{
    // 3,9,20,null,null,15,7
    Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(17);

    cout<<maxDepth(root);
    return 0;
}
