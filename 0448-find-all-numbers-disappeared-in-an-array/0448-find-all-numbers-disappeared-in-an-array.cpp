class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int n = nums.size();

        vector<int> freq(n + 1, 0);

        // Mark numbers that are present
        for (int i = 0; i < n; i++) {
            freq[nums[i]]++;
        }

        vector<int> ans;

        // Numbers not present
        for (int i = 1; i <= n; i++) {
            if (freq[i] == 0) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};