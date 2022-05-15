class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> v;
        for (int  i = 0; i < nums.size(); i++){
            int diff = target - nums[i];
            if (v.find(nums[i]) != v.end()){
                return {i, v[nums[i]]};
            }
            if (v.find(diff) == v.end()){
                v[diff] = i;
            }
            
        }
        return {0, 0};
    }
};