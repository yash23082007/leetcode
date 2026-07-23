//set approach
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {

        unordered_set<char> st;

        // Store all jewels
        for (int i = 0; i < jewels.size(); i++) {
            st.insert(jewels[i]);
        }

        int count = 0;

        // Count matching stones
        for (int i = 0; i < stones.size(); i++) {

            if (st.find(stones[i]) != st.end()) {
                count++;
            }
        }

        return count;
    }
};