class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size(),j=0,i=0;
        for(i=0;i<len;i++) {
            if(nums[i]!=val){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};