class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums,
                                          vector<int>& l,
                                          vector<int>& r) {
        vector<bool> ans;

        for (int i = 0; i < l.size(); i++) {
            vector<int> v;//createing a temp array for storing element 

            for (int j = l[i]; j <= r[i]; j++)
                v.push_back(nums[j]);

            sort(v.begin(), v.end());

            bool ok = true;

            for (int j = 2; j < v.size(); j++) {
                if (v[j] - v[j-1] != v[1] - v[0]) {
                    ok = false;
                    break;
                }
            }

            ans.push_back(ok);
        }

        return ans;
    }
};