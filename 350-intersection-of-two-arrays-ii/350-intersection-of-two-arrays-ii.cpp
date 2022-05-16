class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int count = 0;
        vector<int> nums3;
        nums3.resize(nums1.size());
        for (int i = 0; i < nums1.size(); i++){
            nums3[i] = 0;
            for (int j = 0; j < nums2.size(); j++){
                if (nums2[j] == nums1[i]){
                    count++;
                    nums3[i] = 1;
                    nums2[j] = -1;
                    break;
                }
            }
        }
        vector<int> nums4;
        nums4.resize(count);
        for (int i = 0; i < nums1.size(); i++){
            if (nums3[i] == 1){
                nums4[--count] = nums1[i];
            }
        }
        return nums4;
        
    }
};