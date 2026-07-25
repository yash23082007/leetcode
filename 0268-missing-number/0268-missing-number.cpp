//using sum trick to solve we can also solve this using sorting 
class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int expected = n * (n + 1) / 2;

        int actual = 0;

        for (int i = 0; i < nums.size(); i++) {
            actual += nums[i];
        }

        return expected - actual;
    }
};