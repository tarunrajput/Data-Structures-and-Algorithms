#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
};

Node *arrToBST(vector<int> &nums, int start, int end) {
    if (end < start)
        return NULL;
    if (start == end)
        return new Node(nums[start]);

    int mid = (start + end) / 2;
    Node *root = new Node(nums[mid]);

    root->left = arrToBST(nums, start, mid - 1);
    root->right = arrToBST(nums, mid + 1, end);
    return root;
}

Node *sortedArrayToBST(vector<int> &nums) {
    return arrToBST(nums, 0, nums.size() - 1);
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {-10,-3,0,5,9};
    sortedArrayToBST(nums);
    return 0;
}
