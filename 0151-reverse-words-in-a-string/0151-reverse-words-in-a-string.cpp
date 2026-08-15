class Solution {
public:
    string reverseWords(string s) {

        string ans = "";

        // Start from the end
        int i = s.size() - 1;

        while (i >= 0) {

            // 1. Skip spaces
            while (i >= 0 && s[i] == ' ') {
                i--;
            }

            // No more words
            if (i < 0)
                break;

            // 2. j starts at end of current word
            int j = i;

            // 3. Move j to the beginning of the word
            while (j >= 0 && s[j] != ' ') {
                j--;
            }

            // 4. Add space between words
            if (!ans.empty()) {
                ans += ' ';
            }

            // 5. Add current word
            ans += s.substr(j + 1, i - j);

            // 6. Move to previous word
            i = j - 1;
        }

        return ans;
    }
};