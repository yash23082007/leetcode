class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> v;
        int mx = 0;

        for (int x : nums) {
            mx = max(mx, x);
            v.push_back(gcd(x, mx));
        }

        sort(v.begin(), v.end());

        long long ans = 0;
        int n = v.size();

        for (int i = 0; i < n / 2; i++) {
            ans += gcd(v[i], v[n - 1 - i]);
        }

        return ans;
    }
};