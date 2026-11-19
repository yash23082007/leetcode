class Solution {
public:
    int minimizeSum(vector<int>& nums) {
       sort(nums.begin() , nums.end()) ; 
       int n = nums.size() ; 
       int ans1 =abs(nums[2]-nums[n-1]) ; 
       int ans2 = abs(nums[n-3] - nums[0]) ; 
       int ans3 = abs(nums[1]-nums[n-2]) ; 
       return min({ans1 , ans2,ans3}) ; 
    }
};