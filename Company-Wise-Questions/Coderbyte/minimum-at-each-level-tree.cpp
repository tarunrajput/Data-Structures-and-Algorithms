#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left,*right;
    Node(int x) : data(x), left(NULL), right(NULL) {}
};

int getHeightOfTree(Node *root) {
    if(root == NULL)
        return 0;
    int leftHeight = 0;
    int rightHeight = 0;
    if(root->left!=NULL)
        leftHeight = getHeightOfTree(root->left);
    if(root->right!=NULL)
        rightHeight = getHeightOfTree(root->right);
    return max(leftHeight,rightHeight) + 1;   
}

void minatEachLevel(Node *root, int minArr[],int level) {
    if(root==NULL)
        return;
    
    if(root->data < minArr[level]){
        minArr[level]=root->data;
    }
    minatEachLevel(root->left,minArr,level+1);
    minatEachLevel(root->right,minArr,level+1);    
}


int main(int argc, char const *argv[])
{
    Node *root = new Node(6); 
    root->left = new Node(4); 
    root->right = new Node(8); 
    root->left->left = new Node(3); 
    root->left->right = new Node(5); 
    root->right->left = new Node(7); 
    root->right->right = new Node(9); 

    int levels = getHeightOfTree(root); 
  
    int minArr[levels];
    fill_n(minArr,levels,INT16_MAX); 
    minatEachLevel(root, minArr, 0); 
  
    for(int i:minArr)
        cout<<i<<" ";
    return 0;
}