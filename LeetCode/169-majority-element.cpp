// Given an array of size n, find the majority element. T
// The majority element is the element that appears more than ⌊ n/2 ⌋ times.

#include<bits/stdc++.h>
using namespace std;

// Boyer-Moore Voting Algorithm
int majorityElement(vector<int> &nums) {
    int count = 0;
    int candidate;

    for (int num : nums) {
        if (count == 0)
            candidate = num;
        if (num == candidate)
            count += 1;
        else
            count += -1;
    }
    return candidate;
}

int main(int argc, char const *argv[])
{
    vector<int> nums = {2,2,1,1,1,2,2};
    cout<<majorityElement(nums);
    return 0;
}
