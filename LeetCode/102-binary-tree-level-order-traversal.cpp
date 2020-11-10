#include <iostream>
#include <queue>
#include <vector>
using namespace std;

struct Node
{
    int val;
    Node *left, *right;
    Node(int data) : val(data), left(nullptr), right(nullptr) {}
};

vector<vector<int>> levelOrder(Node *root) {
    if (!root)
        return {};
    vector<vector<int>> levelRows;
    vector<int> row;
    queue<Node *> q;
    q.push(root);
    int count = 1;

    while (!q.empty()) {
        if (q.front()->left)
            q.push(q.front()->left);
        if (q.front()->right)
            q.push(q.front()->right);
        row.push_back(q.front()->val);
        q.pop();
        if (--count == 0) {
            levelRows.push_back(row);
            row.clear();
            count = q.size();
        }
    }
    return levelRows;
}

int main(int argc, char const *argv[]) {
    Node *root = new Node(3);
    root->left = new Node(9);
    root->right = new Node(20);
    root->right->left = new Node(15);
    root->right->right = new Node(7);
    vector<vector<int>> levelRows = levelOrder(root);
    for (vector<int> row : levelRows) {
        for (int i : row) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
