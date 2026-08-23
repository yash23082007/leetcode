class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();

        int leftSum = 0, rightSum = 0;
        int leftQ = 0, rightQ = 0;

        // Left half
        for (int i = 0; i < n / 2; i++) {
            if (num[i] == '?')
                leftQ++;
            else
                leftSum += num[i] - '0';
        }

        // Right half
        for (int i = n / 2; i < n; i++) {
            if (num[i] == '?')
                rightQ++;
            else
                rightSum += num[i] - '0';
        }

        int qDiff = leftQ - rightQ;
        int sumDiff = leftSum - rightSum;

        // Odd number of unmatched '?'
        if (qDiff % 2 != 0)
            return true;

        // Bob can force equality only in this case
        return sumDiff != -9 * qDiff / 2;
    }
};