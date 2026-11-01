class Solution {
public:
    int minMoves(vector<int>& nums) {
        //ining min va such that when ibaray inction nnot vai
        int min_val = nums[0];
        for (int num : nums) {
            if (num < min_val) {
                min_val = num;
            }
        }
        
       
        int moves = 0;
        for (int num : nums) {
            moves += (num - min_val);
        }
        
        return moves;
    }
};