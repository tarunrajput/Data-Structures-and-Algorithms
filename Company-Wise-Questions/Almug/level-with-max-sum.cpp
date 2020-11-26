#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

int LevelWithMaxSum(Node *root) {
    if(root == NULL)
        return 0;
    int result = root->data;
    int maxlevel = 0;
    int currlevel = 0;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()) {
        int sum = 0;
        currlevel++;
        int qsize = q.size();
        while(qsize--) {
            Node *temp = q.front();
            q.pop();
            sum+=temp->data;
            if(temp->left!=NULL)
                q.push(temp->left);
            if(temp->right!=NULL)
                q.push(temp->right);
        }
        if(sum>result){
            result=sum;
            maxlevel=currlevel;
        }
    }
    return maxlevel;
}

int main(int argc, char const *argv[])
{
    Node *root = new Node(6); 
    root->left = new Node(4); 
    root->right = new Node(40); 
    root->left->left = new Node(3); 
    root->left->right = new Node(5); 
    root->right->left = new Node(7); 
    root->right->right = new Node(9); 

    cout<<LevelWithMaxSum(root);

    return 0;
}