/* Program to find singles in a given binary tree */
#include <bits/stdc++.h> 
using namespace std; 

// A Binary Tree Node 
struct node 
{ 
	struct node *left, *right; 
	int key; 
}; 

// Utility function to create a new tree node 
node* newNode(int key) 
{ 
	node *temp = new node; 
	temp->key = key; 
	temp->left = temp->right = NULL; 
	return temp; 
} 

// Function to print all non-root nodes that don't have a sibling 
void printSingles(struct node *root) 
{ 
	// Base case 
	if (root == NULL) 
	return; 

	// If this is an internal node, recur for left 
	// and right subtrees 
	if (root->left != NULL && root->right != NULL) 
	{ 
		printSingles(root->left); 
		printSingles(root->right); 
	} 

	// If left child is NULL and right is not, print right child 
	// and recur for right child 
  	else if (root->left != NULL) 
	{ 
	    printSingles(root->left); 
		cout << root->key << " "; 
		
	} 
	else if (root->right != NULL) 
	{ 
	    printSingles(root->right);
		cout << root->key << " "; 
		 
	} 

	// If right child is NULL and left is not, print left child 
	// and recur for left child 
	
} 

// Driver program to test above functions 
int main() 
{ 
	// Let us create binary tree given in the above example 
	node *root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left=newNode(4);
	root->left->right = newNode(5); 
	root->right->left = newNode(6);
	root->right->right=newNode(7);
	root->left->left->left = newNode(8); 
	root->left->right->left = newNode(9); 
	root->left->right->right = newNode(10); 
	root->right->left->right = newNode(11); 
	root->left->left->left->left = newNode(12); 
	printSingles(root); 
	return 0; 
} 
