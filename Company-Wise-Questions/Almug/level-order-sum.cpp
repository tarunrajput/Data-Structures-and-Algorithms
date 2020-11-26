// Print Level Order Sum/ Sum at each Level using Queue
// Time complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int x): data(x), left(NULL), right(NULL){}
};
vector<int> levelSum(Node *root) {
    vector<int> levelSums;
    if(root==NULL)
        return levelSums;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        int qsize = q.size();
        int sum=0;
        while(qsize--){
            Node *temp = q.front();
            q.pop();
            sum+=temp->data;
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
        levelSums.push_back(sum);
    }

    return levelSums;

}
int main(int argc, char const *argv[])
{
    Node *root = new Node(1); 
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> v=levelSum(root);
    for(int i:v)
        cout<<i<<" "; 
}