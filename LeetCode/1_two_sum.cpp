class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        int len = nums.size();
        vector<int> ans;
        for(int i=0;i<len;i++)
        {
            int complement = target - nums[i];
            if(map.count(complement))
                return {map[complement], i};
            map[nums[i]] = i;            
        } 
        return {};
    }
};
