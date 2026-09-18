// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         int dup=0;
//         int dis=0;
//         for(int i =0;i<nums.size();i++){
//             if(nums[i+1]==nums[i]){
//                 dup=nums[i];
//                 dis=nums[i+2]-nums[i+1];

//             }

//         }
//         vector<int>ans;
//         ans.push_back(dup);
//         ans.push_back(dis);
//         return ans;
        
//     }
// };



//using frequency array 
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1, 0);

        for (int x : nums) {
            freq[x]++;
        }

        int dup = 0, missing = 0;

        for (int i = 1; i <= n; i++) {
            if (freq[i] == 2)
                dup = i;

            if (freq[i] == 0)
                missing = i;
        }

        return {dup, missing};
    }
};