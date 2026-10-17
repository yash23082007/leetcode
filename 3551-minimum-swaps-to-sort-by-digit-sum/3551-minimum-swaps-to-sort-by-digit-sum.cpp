class Solution {
public:
    int getDigitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<int> sortedNums = nums;

        sort(sortedNums.begin(), sortedNums.end(), [&](int a, int b) {
            int sumA = getDigitSum(a);
            int sumB = getDigitSum(b);

            if (sumA != sumB) return sumA < sumB;
            return a < b;
        });

        unordered_map<int, int> index;
        for (int i = 0; i < n; i++) {
            index[nums[i]] = i;
        }

        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == sortedNums[i]) continue;

             int j = index[sortedNums[i]];

            index[nums[i]] = j;
            index[nums[j]] = i;

            swap(nums[i], nums[j]);
            swaps++;
        }

        return swaps;
    }
};