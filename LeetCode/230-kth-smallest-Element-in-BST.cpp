#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int data) : val(data), left(nullptr), right(nullptr) {}
};

void inorder(TreeNode *root, vector<int> &elements) {
    if (!root)
        return;
    inorder(root->left, elements);
    elements.push_back(root->val);
    inorder(root->right, elements);
}

int kthSmallest(TreeNode *root, int k) {
    vector<int> elements;
    inorder(root, elements);
    sort(elements.begin(), elements.end());
    return elements[k - 1];
}

int main(int argc, char const *argv[]) {
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->left->left->left = new TreeNode(1);

    cout << kthSmallest(root, 3);
    return 0;
}
