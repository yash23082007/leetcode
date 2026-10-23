class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> count;
        vector<int> ans;

        for (int x : nums) {
            count[x]++;
            if (count[x] == 2) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};