class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int n=nums.size();
        int even_op=0;
        int odd_op=0;

        for(int i=0;i<n;i++){
             int left = (i > 0) ? nums[i - 1] : INT_MAX;
            int right = (i < n - 1) ? nums[i + 1] : INT_MAX;


            int target=min(left,right);


            if(nums[i]>=target){
                         int operations=nums[i]-target+1;
                         if (i % 2 == 0) {
                    even_op += operations;
                } else {
                    odd_op += operations;
                }
            }

        }
        return min(even_op,odd_op);

        
        
    }
};