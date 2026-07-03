class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        // Stores the latest index of every number
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            // If number already exists
            if (mp.find(nums[i]) != mp.end()) {

                // Check distance between current and previous occurrence
                if (i - mp[nums[i]] <= k)
                    return true;
            }

            // Update latest index
            mp[nums[i]] = i;
        }

        return false;
    }
};