#include<bits/stdc++.h>
using namespace std;

//Using gauss formula Time: O(n) space:O(1)
int missingNumber(vector<int>& nums) {
    int len=nums.size();
    int sumToCheck=len*(len+1)/2;
    int sum=0;
    for(int i:nums){
        sum+=i;
    }
    return sumToCheck - sum;
}
// Using XOR Time:O(n) space: O(1)
int missingNumberUsingXOR(vector<int>& nums){
    int missing = nums.size();
    for(int i=0;i<nums.size();i++){
        missing^=i ^ nums[i];
    }
    return missing;
}

int main(int argc, char const *argv[])
{
    vector<int> nums={3,0,1};
    cout<<missingNumber(nums);
    return 0;
}