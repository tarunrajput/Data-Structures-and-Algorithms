#include<bits/stdc++.h>
using namespace std;

int firstMissingPostive(vector<int>& nums) {
    int len=nums.size();
    for(int i=0; i<len; i++) {
        if(nums[i]>0 && nums[i]<=len && nums[i]!=nums[nums[i]-1]) {
            swap(nums[i],nums[nums[i]-1]);
            i--;
        }
    }
    for(int i=0;i<len;i++)
        if(nums[i]!=i+1)
            return i+1;
    return len+1;

}
int main(int argc, char const *argv[])
{
    vector<int> nums ={1,2,0};
    swap(nums[2],nums[nums[2]-1]);
    for(int i:nums){
        cout<<i<<"\n";
    }
    return 0;
}