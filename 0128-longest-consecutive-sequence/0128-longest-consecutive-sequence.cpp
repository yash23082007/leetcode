class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st;

        // Store all unique numbers
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        int longest = 0;

        // Iterate over unique elements only
        for (auto it = st.begin(); it != st.end(); it++) {

            int num = *it;

            // Start only from the beginning of a sequence
            if (st.find(num - 1) == st.end()) {

                int count = 1;
                int curr = num;

                while (st.find(curr + 1) != st.end()) {
                    curr++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};