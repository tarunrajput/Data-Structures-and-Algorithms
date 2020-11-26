#include <iostream>
using namespace std;

// Data structure to store a Binary Tree node
struct Node
{
    int key;
    Node *left, *right;

    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};

bool check(Node *root)
{
    if (root == NULL || root->left != NULL && root->right != NULL)
        true;
    else
    {
        check(root->left);
        check(root->right);
        if (root->key == (root->left->key) + (root->right->key))
        {

            return true;
        }
    }
    return false;
}
int main()
{
    Node *root = nullptr;

    root = new Node(8);
    root->left = new Node(5);
    root->right = new Node(3);
    root->left->left = new Node(3);
    root->left->right = new Node(2);
    root->right->right = new Node(3);

    if (check(root) == false)
        cout << "true";
    else
        cout << "false";

    return 0;
}
