#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for (int i = 0 ; i < nums.size() ; i++) pq.push(nums[i]);
        while (--k) pq.pop();
        return pq.top();
}

int main(int argc, char const *argv[])
{
    vector<int> v={3,4,2,6,7,8,5};
    cout<<findKthLargest(v,3);

    return 0;
}
