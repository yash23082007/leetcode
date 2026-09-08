class Solution {
public:
    int countCommas(int n) {
        int ans = 0;

        for (int i = 1000; i <= n; i++) {
            ans += to_string(i).size() / 4;
        }

        return ans;
    }
};