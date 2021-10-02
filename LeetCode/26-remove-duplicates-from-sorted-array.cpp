class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        if(length==NULL)
            return NULL;
        int j = 0,i=0;
        
        
        for(i=1;i<length;i++) {
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
            }
        }
        return j + 1;
    }
};