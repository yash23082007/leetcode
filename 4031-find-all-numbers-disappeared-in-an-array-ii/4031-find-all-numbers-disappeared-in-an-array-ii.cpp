class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<vector<int>>result;
        sort(nums.begin(),nums.end());
        int curr=lower;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<curr) continue;
            if(nums[i]>upper) break;

            if(nums[i]>curr){
                result.push_back({curr,nums[i]-1});
            }
            curr=nums[i]+1;
        }
        if(curr<=upper){
            result.push_back({curr,upper});
        }
        return result;
        
    }
};