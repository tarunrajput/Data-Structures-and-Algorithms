class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int mid = 0;
        while(low <= high) {
        mid = low + (high - low)/2;
        if(nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
        }    
        return low;
    }
};