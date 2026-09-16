class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;//using set for storing char

        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.length(); right++) {

            // If duplicate, remove from left
            while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }

            // Add current character , inserting 
            st.insert(s[right]);

            // Calculate window length l-r+1
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};