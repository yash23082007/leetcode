
        // for 2 sum
        // fix nothing , use two pointers 0(n)

        // for 3 sum
        // fix 1 number
        // use two pointers
        // o(n^2)

        // for 4 sum
        // fix 2 numbers
        // use 2 pointers
        // O(n^3)
        
    class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        int n = nums.size();

        for(int i=0;i<n;i++) {

            if(i>0 && nums[i]==nums[i-1])
                continue;

            for(int j=i+1;j<n;j++) {

                if(j>i+1 && nums[j]==nums[j-1])
                    continue;

                int p=j+1;
                int q=n-1;

                while(p<q) {

                    long long sum =
                    (long long)nums[i] +
                    nums[j] +
                    nums[p] +
                    nums[q];

                    if(sum < target) {
                        p++;
                    }
                    else if(sum > target) {
                        q--;
                    }
                    else {

                        ans.push_back(
                        {nums[i],nums[j],nums[p],nums[q]}
                        );

                        p++;
                        q--;

                        while(p<q &&
                              nums[p]==nums[p-1])
                            p++;

                        while(p<q &&
                              nums[q]==nums[q+1])
                            q--;
                    }
                }
            }
        }

        return ans;
    }
};