class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //cycle sort and index placement method
        int n=nums.size();
        for(int i=0;i<nums.size();i++){

            //using while loop

            while(nums[i]>0&&nums[i]<=n&& nums[nums[i] - 1] != nums[i]){

                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i+1){
                return i+1;
            }
           
        } return n+1;
    }
};