class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int current_max = nums[0];
        
        for (int i = 0; i < nums.size(); ++i) {
            current_max = max(current_max, nums[i]);
            int current_min = *min_element(nums.begin() + i, nums.end());
            
            if (current_max - current_min <= k) {
                return i;
            }
        }
        
        return -1;
    }
};