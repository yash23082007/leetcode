class Solution {
public:

    // Function to check if substring s[left...right] is palindrome
    bool isPalindrome(string &s, int left, int right) {

        while (left < right) {

            // If characters don't match
            if (s[left] != s[right])
                return false;

            left++;
            right--;
        }

        return true;
    }

    bool validPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            // Characters match, move both pointers
            if (s[left] == s[right]) {
                left++;
                right--;
            }

            // Mismatch found
            else {

                // Either delete left character
                // OR delete right character
                return isPalindrome(s, left + 1, right) ||
                       isPalindrome(s, left, right - 1);
            }
        }

        // No mismatch found
        return true;
    }
};