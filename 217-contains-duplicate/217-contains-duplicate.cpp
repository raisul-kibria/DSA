class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> num_map = {};
        for (int i = 0; i < n; i++){
            if (num_map.find(nums[i]) != num_map.end())
                    return true;
            else
                num_map[nums[i]]=1; 
        }
        return false;
    }
};