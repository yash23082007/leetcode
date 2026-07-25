//simple binary search problem 
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int left = 0, right = letters.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (letters[mid] <= target)//1
                left = mid + 1;
            else
                right = mid - 1;//2
        }

        if (left == letters.size()) //important edge case
            return letters[0];

        return letters[left];
    }
};