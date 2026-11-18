// class Solution {
// public:
//     int maxFreeTime(int eventTime, int k,
//                     vector<int>& startTime,
//                     vector<int>& endTime) {

//         int n = startTime.size();
//         vector<int> gaps;

        
//         gaps.push_back(startTime[0]);

        
//         for (int i = 1; i < n; i++) {
//             gaps.push_back(startTime[i] - endTime[i - 1]);
//         }

        
//         gaps.push_back(eventTime - endTime[n - 1]);

//         // Sliding window of size k + 1
//         int i = 0, j=0;
//         int currentSum = 0;
//         int maxSum = 0;
//         int windowSize = k + 1;

//         while (j < gaps.size()) {
//             currentSum += gaps[j];

//             if (j - i + 1 > windowSize) {
//                 currentSum -= gaps[i];
//                 i++;
//             }

//             maxSum = max(maxSum, currentSum);
//             j++;
//         }

//         return maxSum;
//     }
// };
class Solution {
public:
    int maxFreeTime(int eventTime, int k,
                    vector<int>& startTime,
                    vector<int>& endTime) {

        int n = startTime.size();

        vector<int> gaps;

        gaps.push_back(startTime[0]);

        for (int i = 1; i < n; i++) {
            gaps.push_back(startTime[i] - endTime[i - 1]);
        }

        gaps.push_back(eventTime - endTime[n - 1]);

        int i = 0;
        int sum = 0;
        int ans = 0;

        for (int j = 0; j < gaps.size(); j++) {

            sum += gaps[j];

            if (j - i + 1 > k + 1) {
                sum -= gaps[i];
                i++;
            }

            ans = max(ans, sum);
        }

        return ans;
    }
};